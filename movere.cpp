#include <graphics.h>
#include <conio.h>
#include"stdio.h"
#include"math.h"
#define rd 1
#define ru 2
#define lu 3
#define ld 4
#define PI 3.14
int x=0, y=0;

int detction=rd;
void bagin();
void Drew()
{

		
		setlinecolor(YELLOW);	// 绘制黄线、绿色填充的圆
		setfillcolor(GREEN);
		fillcircle(x, y, 20);
		Sleep(10);// 延时
		
		setlinecolor(BLACK);	// 绘制黑线、黑色填充的圆
		setfillcolor(BLACK);
		
		fillcircle(x, y, 20);
				
				outtextxy(550,450,_T("小仁制作"));
				bagin();
}
void rightdown()
{
			
				while((y+21<480)&&(x+21<640))
				{
					x++;
					y++;
					Drew();
				}
				
}
void rightup()
{
	while((x+21<640)&&(y-21>0))
				{
					x++;
					y--;
					Drew();
				}
}

void leftup()
{
	
			while((y-21>0)&&(x-21>0))
				{
					x--;
					y--;
					Drew();
			}
}
void leftdown()
{
	
			while((x-21>0)&&(y+21<480))
			{
				x--;
				y++;
				Drew();
			}
}
void bagin()
{
	
			
	  if(detction==ru&&y-21==0)
			  {		
					detction=rd;
					rightdown();
			  }
			  else if(detction==lu&&y-21==0)
			  {
				  detction=ld;
				  leftdown();
			  }
			  else if(detction==ru&&x+21==640)
			  {
					detction=lu;
				  leftup();
			  }
			  else if(detction==rd&&x+21==640)
			  {	
					detction=ld;
				  leftdown();
			  }
			  else if(detction==rd&&y+21==480)
			  {
				  detction=ru;
				  rightup();
			  }
			  else if(detction==ld&&(y+21==480))
			  {
				  detction=lu;
				  leftup();
			  }
			  else if(detction==ld&&x-21==0)
			  {
				  detction=rd;
				  rightdown();
			  }
			  else if(detction==lu&&x-21==0)
			  {
					detction=ru;
				  rightup();
			  }
			  else if(x==0&&y==0&&detction==rd)
			  {
				 
				  rightdown();
				 
			  }
			  else
				  printf("error");
			  

			
		
}
void main()
{
		int c;
	double a;

	

	initgraph(640, 480);
	
		
		
			bagin();
			
		
	closegraph();
}