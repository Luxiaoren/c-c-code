#include"graphics.h"
#include"stdio.h"
#include"conio.h"
#include"ctime"
#include"math.h"

#define PI 3.141592654
void Drew(int hour,int minute,int second)
{
	double a_hou,a_min,a_sec;//ʱ������Ļ���
	int x_hou,y_hou,x_min,y_min,x_sec,y_sec;//ʱ������ĩ�˵�λ��
	//����ʱ����Ļ���ֵ
	a_sec=second*2*PI/60;
	a_min=minute*2*PI/60+a_sec/60;
	a_hou=hour*2*PI/12+a_min/12;
	
	x_sec=320+(int)(120*sin(a_sec));
	y_sec=240-(int)(120*cos(a_sec));
	x_min=320+(int)(100*sin(a_min));
	y_min=240-(int)(100*cos(a_min));
	x_hou=320+(int)(60*sin(a_hou));
	y_hou=240-(int)(60*cos(a_hou));

	//��ʱ��
	setlinestyle(PS_SOLID,7,NULL);
	setlinecolor(WHITE);
	line(320,240,x_hou,y_hou);

	//������	
	setlinestyle(PS_SOLID,5,NULL);
	setlinecolor(YELLOW);
	line(320,240,x_min,y_min);

	//������
	setlinestyle(PS_SOLID,2,NULL);
	setlinecolor(RED);
	line(320,240,x_sec,y_sec);


}
void Drew_()
{
	double a;
	int x,y,x_,y_;
	int second;
	for(second=0;a<=60;second++)
	{	
		a=second*2*PI/60;
		x=320+(int)(160*sin(a));
		y=240-(int)(160*cos(a));
			if(second%15==0)
			{
					x_=320+(int)(140*sin(a));
					y_=240-(int)(140*cos(a));
			}
			else
			if(second%5==0&&second%15!=0)
			{
					x_=320+(int)(145*sin(a));
					y_=240-(int)(145*cos(a));
			}

			else
			{
	
			x_=320+(int)(150*sin(a));
			y_=240-(int)(150*cos(a));
			}
	setlinestyle(PS_SOLID,5);//�����߿�
	setlinecolor(GREEN);//������ɫ
	line(x_,y_,x,y);
	}
	outtextxy((320+(int)(140*sin(59.5*2*PI/60))),(240-(int)(143*cos(59.5*2*PI/60))),_T("60"));
	outtextxy((320+(int)(125*sin(14.5*2*PI/60))),(240-(int)(143*cos(14.5*2*PI/60))),_T("15"));
	outtextxy((320+(int)(125*sin(30.5*2*PI/60))),(240-(int)(130*cos(30.5*2*PI/60))),_T("30"));
	outtextxy((320+(int)(140*sin(45.5*2*PI/60))),(240-(int)(143*cos(45.5*2*PI/60))),_T("45"));
}
int main()
{

	int x,y,x1,y1,y2;
	int gdrive=DETECT;
	int gmode;
	initgraph(&gdrive,&gmode,"");//ͼ�γ�ʼ��
	outtextxy(550,450,_T("С������"));
	setlinestyle(PS_SOLID,5);//�����߿�
	setlinecolor(GREEN);//������ɫ
	
	circle(320,240,160);
	circle(320,240,60);
	circle(320,240,2);
	Drew_();
	setwritemode(R2_XORPEN);//xroģʽ��ͼ
	SYSTEMTIME ti;
	while(!kbhit())
	{
	
		GetLocalTime(&ti);//���ϵͳ��ǰʱ��
		Drew(ti.wHour,ti.wMinute,ti.wSecond);//��ʱ������
		Sleep(1000);//�ӳ�һ��
		Drew(ti.wHour,ti.wMinute,ti.wSecond);//����ʱ������
	}
		
		
		
	
	closegraph();//�ر�ͼ�ν���
	system("pause");
}