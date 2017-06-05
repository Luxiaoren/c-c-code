#include "stdio.h"
#include "conio.h"
#include "windows.h"
void gotoxy(int x,int y)
	{
		COORD pos={x,y};
			HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
		
		SetConsoleCursorPosition(hOut,pos);
	}

int pageshow()
	{	
		int i;
		char *p="娆㈣繋鐧诲綍瀛︾敓淇℃伅绠＄悊绯荤粺锛侊紒锛�;
		gotoxy(30,10);
	
		for(i=0;*(p+i)!='\0';i++)
		{
			printf("%c",*(p+i));
			Sleep(50);
		}
			Sleep(5000);
			system("cls");
			gotoxy(30,1);
			printf("姝ｅ湪鎼�缓鐣岄潰鐜��璇风◢鍊欙紒锛�);
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
			printf("    宸叉惌寤哄畬鎴愶紒锛�             ");
			gotoxy(30,14);
	return 0;
	}
	void pointo()
	{
		gotoxy(30,3);
		printf("->");
	}
void main()
{
	system("cls");
	pageshow();
	pointo();

}