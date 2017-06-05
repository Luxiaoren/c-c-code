#include"graphics.h"
#include"conio.h"
#include"stdio.h"
#define LIFT 0x4b
#define RIGHT 0x4d
#define UP 0x48
#define DOWN 0x50
int x=30,y=30;
void clear()
{
	setlinecolor(BLACK);
	setfillcolor(BLACK);
	fillcircle(x,y,20);
}
void replay()
{
	setlinecolor(YELLOW);
	setfillcolor(WHITE);
	fillcircle(x,y,20);
}
int main()
{
	char c;
	
	initgraph(640,480);
	setlinecolor(YELLOW);
	setfillcolor(WHITE);
	rectangle(33,33,88,88);
	fillcircle(x,y,20);
	while(c!=27)
		{
			if(kbhit())
			{
				c=getch();
				if(c = 0xe0)
				{
					c=getch();
				
					if( c==DOWN)
						
					{
						if(y+21>=480)
							;
						else
						{
						clear();
						y+=10;
						replay();
						}
						
					}
					else if(c==UP)
					{
						if(y-21<=0)
							;
						else
						{
						clear();
						y-=10;
						replay();
						}

					}
					else if(c==LIFT)
					{
						if(x-21<=0)
							;
						else
						{
						clear();
						x-=10;
						replay();
						}
					}
					else if(c==RIGHT)
					{
						if(x+21>=640)
							;
						else
						{
						clear();
						x+=10;
						replay();
						}
					}
				}
			}
		}
	system("pause");
}