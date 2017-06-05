
#include "stdio.h"
#include "conio.h"
#include "windows.h"

int changex=30;
int changey=2;
void gotoxy(int x,int y)
	{
		COORD pos={x,y};
			HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleCursorPosition(hOut,pos);
	}
int pageshow()
	{
		int i;
		char *p="欢迎登录学生信息管理系统！！！";
		gotoxy(30,10);

		for(i=0;*(p+i)!='\0';i++)
		{
			printf("%c",*(p+i));
			Sleep(50);
		}
			Sleep(5000);
			system("cls");
			gotoxy(30,1);
			printf("正在搭建界面环境请稍候！！");
			gotoxy(14,2);
			printf("|---------------------------------------------------------|\n");
			Sleep(100);
			gotoxy(14,3);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
			gotoxy(14,4);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
			gotoxy(14,5);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
			gotoxy(14,6);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
			gotoxy(14,7);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
			gotoxy(14,8);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
			gotoxy(14,9);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
			gotoxy(14,10);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
			gotoxy(14,11);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
				gotoxy(14,12);
			printf("|\t\t\t\t\t\t\t\t|\n");
			Sleep(100);
			gotoxy(15,12);
			printf("---------------------------------------------------------\n");
			Sleep(100);
			gotoxy(35,3);
			printf("0. exit\n");
			Sleep(100);
			gotoxy(35,4);
			printf("1. input record");
			Sleep(100);
			gotoxy(35,5);
			printf("2. search record");
			Sleep(100);
			gotoxy(35,6);
			printf("3. delete record");
			Sleep(100);
			gotoxy(35,7);
			printf("4. modify record");
			Sleep(100);
			gotoxy(35,8);
			printf("5. insert record");
			Sleep(100);
			gotoxy(35,9);
			printf("6. order");
			Sleep(100);
			gotoxy(35,10);
			printf("7. number");
			Sleep(100);
			gotoxy(35,11);
			printf("8. show");
			Sleep(100);
			gotoxy(30,1);
			printf("    已搭建完成！！              ");

return 0;
	}
	int pageshow_()
	{
		gotoxy(14,1);
		printf("|---------------------------------------------------------|\n");
		gotoxy(14,2);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(14,3);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(14,4);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(14,5);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(14,6);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(14,7);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(14,8);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(14,9);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(14,10);
		printf("|\t\t\t\t\t\t\t\t|\n");
			gotoxy(14,11);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(15,11);
		printf("---------------------------------------------------------\n");
			gotoxy(35,2);
			printf("0. exit\n");
			gotoxy(35,3);
			printf("1. input record");
			gotoxy(35,4);
			printf("2. search record");
			gotoxy(35,5);
			printf("3. delete record");
			gotoxy(35,6);
			printf("4. modify record");
			gotoxy(35,7);
			printf("5. insert record");
			gotoxy(35,8);
			printf("6. order");
			gotoxy(35,9);
			printf("7. number");
			gotoxy(35,10);
			printf("8. show");

return 0;

	}
	void pointo()
	{
	    int i;
	    int flag=0;
	    char ch;
  char c=0;
	    char e=0;

      c=getch();
        if(c = 0xe0)
        {

            c=getch();


        if(c==0x48)
        {
            if(changey==2)
                ;
            else
            {
                        for(i=0;i<2;i++)
                    {
                        system("cls");
                        pageshow_();
                        gotoxy(changex,changey-i);
                        changey-=i;
                        printf("->");


                        Sleep(50);
                    }
                    for( i=0;i<2;i++)
                    {

                        system("cls");
                         pageshow_();
                        gotoxy(changex,changey+i);
                        changey+=i;
                         printf("->");

                        Sleep(50);
                    }
            }
        }
        else
            if(c==0x50)
        {
            if(changey==10)
                ;
            else
            {

                system("cls");
                pageshow_();

                gotoxy(changex,changey+1);
                changey+=1;
                printf("->");

            }
        }

        }



        return ;
	}
	void get()
	{
	    int flag=0;
	    gotoxy(changex ,changey);
		printf("->");
	    while(1)
        {
            if(kbhit())
                pointo();
        }
	}

void main()
{
	system("cls");
	pageshow_();
	get();

}
