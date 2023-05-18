#include <stdio.h>
void year(int y)
{
	int x1,y1,x2,y2,max;
	max=0;
	int m=1;
	int count=0;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(leapyear(y)==1){
		a[2]=29;
	}
	for(m=1;m<13;m++){
		x1=wherex();
		y1=wherey(); //Record the cursor position at this time 
		month(y,m);//Output calendar of one month
		if(max<wherey())
		{
			max=wherey();   //Record the lowest coordinates of the cursor
		}
		count++;
		if(count%4==0){
			x2=wherex();
			y2=wherey();
			gotoxy(1,max+3);
		}else{
			gotoxy(x1+58,y1);
		}
		//Change lines every four months
	}
	
}//end function
