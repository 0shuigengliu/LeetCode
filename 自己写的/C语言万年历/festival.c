#include <stdio.h>
int festival(int y,int m,int d,int lm,int ld,int mod) //mod ==1 Output only one festival mod==2 Output multiple festivals
{
	int count=0; //
	color(3);
	if(m==1){
		if(d==1){
			printf("Ԫ��");
			count++; //Add one to the number of festivals
		}
	}
	if(m==2){
		if(d==14){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("���˽�");
			count++; //Add one to the number of festivals
			
		}
	}if(m==3){
		if(d==8){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("��Ů��");
			count++; //Add one to the number of festivals
			
		}
	}if(m==3){
		if(d==12){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("ֲ����");
			count++; //Add one to the number of festivals
			
		}
	}if(m==4){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("���˽�");
			count++; //Add one to the number of festivals
			
		}
	}if(y==2000||y==2004||y==2008||y==2009||y==2012||y==2013||y==2016||y==2017||y==2020||y==2021||y==2024||y==2025||y==2028||y==2029
		||y==2032||y==2033||y==2036||y==2037||y==2040||y==2041||y==2042||y==2044||y==2045||y==2046||y==2048||y==2049||y==2050	){
		if(m==4){
			if(d==4){
				if(count!=0){
					if(mod==1){
						goto end;//If just ask for a holiday, end this function
					}
					printf("|");//If there are more than one festival on the same day, use "|" to divide it
				}
				printf("������");
				count++; //Add one to the number of festivals
			
			}
		}
	}if(y==2001||y==2002||y==2003||y==2005||y==2006||y==2007||y==2010||y==2011||y==2014||y==2015||y==2018||y==2019||y==2022||y==2023||y==2026||y==2027
		||y==2030||y==2031||y==2034||y==2035||y==2038||y==2039||y==2043||y==2047){
		if(m==4){
			if(d==5){
				if(count!=0){
					if(mod==1){
						goto end;//If just ask for a holiday, end this function
					}
					printf("|");//If there are more than one festival on the same day, use "|" to divide it
				}
				printf("������");
				count++; //Add one to the number of festivals
			
			}
		}
	}
	if(m==5){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			color(4);
			printf("�Ͷ���");
			count++; //Add one to the number of festivals
		}
	}
	if(m==5){
		if(d==4){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("�����"); 
			count++;//Add one to the number of festivals
		}
	}
	if(m==6){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("��ͯ��");
			count++; //Add one to the number of festivals
		}
	}if(m==7){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			
			printf("������");
			count++; //Add one to the number of festivals
		}
	}if(m==8){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("������");
			count++; //Add one to the number of festivals
		}
	}if(m==9){
		if(d==10){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("��ʦ��");
			count++; //Add one to the number of festivals
		}
	}if(m==10){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			color(4);//red color
			printf("�����");
			count++; //Add one to the number of festivals
		}
	}if(m==10){
		if(d==31){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("��ʥҹ");
			count++; //Add one to the number of festivals
		}
	}if(m==12){
		if(d==24){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("ƽ��ҹ");
			count++; //Add one to the number of festivals
		}
	}if(m==12){
		if(d==25){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("ʥ����");
			count++; //Add one to the number of festivals
		}
	}if(lm==1){
		if(ld==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			color(4);
			printf("����");
			count++; //Add one to the number of festivals
		}
	}if(lm==1){
		if(ld==15){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("Ԫ��");
			count++; //Add one to the number of festivals
		}
	}if(lm==5){
		if(ld==5){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("�����");
			count++; //Add one to the number of festivals
		}
	}if(lm==7){
		if(ld==7){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("��Ϧ");
			count++; //Add one to the number of festivals
		}
	}if(lm==7){
		if(ld==15){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("��Ԫ��");
			count++; //Add one to the number of festivals
		}
	}if(lm==8){
		if(ld==15){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("�����");
			count++; //Add one to the number of festivals
		}
	}if(lm==9){
		if(ld==9){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("������");
			count++; //Add one to the number of festivals
		}
	}if(lm==12){
		if(ld==23){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("��С��");
			count++; //Add one to the number of festivals
		}
	}if(lm==12){
		if(ld==24){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("��С��");
			count++; //Add one to the number of festivals
		}
	}if(lm==12){
		if(ld==30){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("��Ϧ");
			count++; //Add one to the number of festivals
		}
	}
	end:
	color(7);	
	return count; //Return the total number of festivals
}//end function
