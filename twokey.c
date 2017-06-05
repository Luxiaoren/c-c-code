#include"windows.h"
#include"stdio.h"
#include"conio.h"
 int flag=0;
 int changex=15;
int changey=3;
void get();
void pointo();
 void gotoxy(int x,int y)
	{
		COORD pos={x,y};
			HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleCursorPosition(hOut,pos);
	}
    void twokey()
    {
        int c;
        if(GetAsyncKeyState('A')&0x8000)//'A'
            c|=4;
            if(GetAsyncKeyState('D')&0x8000)//'D'
              c|=8;
        if(c&4&&c&8)
            {
                printf("hello");
                 c=0;
                 
            }
    }
    int pageshow()
	{
		int i;
			system("cls");
			gotoxy(30,1);
			gotoxy(14,2);
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

	return 0;
	}
void pointo()
	{
					int i;
					char c=0;
					 c=_getch();
					if(c=0xe0)
					  {

						    c=_getch();
								if(c==0x48)//ÉÏ
									{
										if(changey==2)
											;
											else
											{
												system("cls");
												pageshow();
												gotoxy(changex,changey-1);
												changey-=1;
												printf("%c",1);
											}

									}

								else
									if(c==0x50)//ÏÂ
									{
										if(changey==10)
											;
										else
										{
											system("cls");
											pageshow();
											gotoxy(changex,changey+1);
											changey+=1;
											printf("%c",1);
										}

									}
									else
										if(c==0x20)//ÌøÔ¾
									{
										for(i=0;i<2;i++)
										{
											system("cls");
											pageshow();
											gotoxy(changex,changey-i);
											changey-=i;
											printf("%c",1);
											Sleep(50);
										}
										for( i=0;i<2;i++)
										{

											system("cls");
											 pageshow();
											gotoxy(changex,changey+i);
											changey+=i;
											 printf("%c",1);
											Sleep(50);

										}
									}
									else
										if(c==0x4b)//×ó
										{
											if(changex==15)
												;
											else
											{
												system("cls");
												pageshow();
												gotoxy(changex-1,changey);
												changex-=1;
												printf("%c",1);
											}
										}
										else
											if(c==0x4d)//ÓÒ
										{
											if(changex==71)
												;
											else
											{

												system("cls");
												pageshow();
												gotoxy(changex+1,changey);
												changex+=1;
												printf("%c",1);
											} 
										}
						}
              return;
        }
	void get()
	{
	    while(1)
        {
            if(_kbhit())
                pointo();
        }
	}
	void justice()
	{
	    gotoxy(15,3);
	    printf("%c",1);
	    gotoxy(30,13);
	}
void main()
{
    pageshow();
    justice();
    get();
 system("pause");
}
