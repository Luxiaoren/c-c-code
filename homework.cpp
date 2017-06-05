//这个作业有点独特，仔细看下面这个数学过程：
//1.随机生成 3 个点 P[0]、P[1]、P[2]； 
//2.随机生成 1 个点 P； 
//3.绘制点 P； 
//4.随机生成 [0, 2] 内的整数 n； 
//5.令 P = P 与 P[n] 的中点； 
//6.重复执行步骤 (3)～(5) 三万次。 
#include"time.h"
#include"stdio.h"
#include"ctime"
#include"iostream"
#include"graphics.h"
void main()
{
	int px,py,n,p0x,p1x,p2x,p0y,p1y,p2y,i;

	initgraph(640,480);
	setlinecolor(RED);
	srand(time(0));
	px=rand()%641;
	py=rand()%481;
	p1x=rand()%641;
	p2x	=rand()%641;
	p0x=rand()%641;
	p0y=rand()%481;
	p1y=rand()%481;
	p2y=rand()%481;
	printf("%d %d",px,py);
	putpixel(px,py,RED);
	for(i=0;i<10000000000000;i++)
	{
		n=rand()%3;
		if(n==0)
		{
			px=(px+p0x)/2;
			py=(py+p0y)/2;
			putpixel(px,py,RED);
		}
		else if(n==1)
		{
				px=(px+p1x)/2;
				py=(py+p1y)/2;
				putpixel(px,py,RED);
		}
		else if(n==2)
		{
				px=(px+p2x)/2;
			py=(py+p2y)/2;
			putpixel(px,py,RED);
		}
		else
			printf("error");
	}


	system("pause");
	
//	for(i=0;i<10;i++)
	//	printf("%d %d\n",rand()%101,rand()%101);

}