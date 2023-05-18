# -*- coding: utf-8 -*-
import requests
from lxml import etree
import time
import random

#可自行扩充
user_agent = [
  'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/106.0.0.0 Safari/537.36 Edg/106.0.1370.52',
]

# 随机获取一个请求头
def get_user_agent():
    return random.choice(user_agent)

taihe_host = 'https://www.lrcgeci.com'
# 点击taihe_host后在搜索栏输入歌手名，将search_url进行替换
search_url = 'https://www.lrcgeci.com/geshou/63.html'

headers={}
# 获取页面 html 文档
def get_page(url, encoding='utf-8'):
  try:
    headers = {'User-Agent': random.choice(user_agent)}
    r = requests.get(url,headers=headers)
    r.encoding = encoding
    return r.text
  except Exception as e:
    print('Error:', url, e)

# 下载歌词文件
def download_file(url, name):
  try:
    headers = {'User-Agent': random.choice(user_agent)}
    r = requests.get(url,headers=headers)
    with open('./lyric/%s.lrc' % name, 'wb') as fw:
      fw.write(r.content)
  except Exception as e:
    print('Error:', url, name, e)

# 解析搜索页面
# 返回歌词链接列表
def parse_search_page(html):
  urls = []
  tree = etree.HTML(html)
  data = tree.xpath('//*[@class="rec"]/ul/li')
  for i in data:
    link = i.xpath('a/@href')
    #print(link)
    song_name = i.xpath('a/text()')
    #print(song_name)
    if len(link) > 0 and len(song_name) > 0:
      urls.append({
        'url': link[0],
        'name': song_name[0]
      })
  return urls

# 获取歌曲页面的歌词下载链接
def get_lyric_url(html):
  tree = etree.HTML(html)
  lyric_url = tree.xpath('//*[@class="downlrc"]/a/@href')
  return lyric_url[0] if len(lyric_url) > 0 else None

if __name__ == "__main__":
  for page in range(25):
    search_url = search_url
    html = get_page(search_url)
    song_urls = parse_search_page(html)
    for song in song_urls:
      print(song)
      song_html = get_page(taihe_host + song['url'])
      lyric_url = get_lyric_url(song_html)
      print('page: %d | name: %s | url: %s' % (page, song['name'], lyric_url))
      download_file(taihe_host +lyric_url, song['name'])
      #搜索间隔
      time.sleep(0.5)

