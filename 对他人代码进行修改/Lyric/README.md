代码时间：2022年5月18日

## 介绍

通过python爬取指定歌手的歌词，对歌词进行词组统计，根据词出现的频率生成词云

## 文件说明

**spider.py**爬取指定歌手的歌词，将歌词存放在**lyric**文件下

**lyric.py**统计歌词中超过两个字及以上的词出现的频率，并生成**words.txt**文件

**word_cloud.py**根据**words.txt**文件在**bg.png**上生成词云，图片保存为**word_cloud.png**