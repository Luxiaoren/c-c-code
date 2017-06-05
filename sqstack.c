/*完成操作，顺序栈的创建，销毁，判断栈空，清空栈，测量栈的长度，
获得栈顶元素，入栈，出栈，数制转换（十进制到八进制）*/

#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#include"windows.h"
#define STACK_INIT_SIZE 100
#define STACKINCREMENT  10
#define OVERFLOW  -2
#define OK		  1
void gotoxy(int x,int y){//定位光标函数
		COORD pos={x,y};
			HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleCursorPosition(hOut,pos);
	}
typedef struct    sqstack{
		int *top;
		int *base;
		int stacksize;
}SqStack;
SqStack s;
void back();
void CreatStack()//初始化顺序栈
{
	s.base=(int *)malloc(STACK_INIT_SIZE*sizeof(int));//为顺序栈申请内存
	if(!s.base)
		exit(OVERFLOW);
	s.top=s.base;
	s.stacksize=STACK_INIT_SIZE;
	return OK;

}
void InStack()//入栈
{
	int i;
	int elem;
	int elemnumber;
	printf("\nElem number:");
	scanf("%d",&elemnumber);
	for(i=0;i<elemnumber;i++)
	{
		if(s.top -  s.base>=s.stacksize)//判断顺序栈是否存满
		{
			s.base=(int *)malloc((s.stacksize+STACKINCREMENT)*sizeof(int));//重新申请地址  比原来的地址大STACKINCREMENT
		s.top=s.base+s.stacksize;
		s.stacksize+=STACKINCREMENT;
		}
		printf("inut elem:");
		scanf("%d",s.top);
		s.top++;
	}
	back();
}
void PrintStack()//输出顺序栈
{
	SqStack ptr=s;
	while(ptr.base!=ptr.top)
	{
		printf("\n%d",*(ptr.top-1));
		ptr.top--;
	}
	printf("\n");
	back();
}
void DestroyStack()//销毁顺序栈
{
	free(s.base);
	back();
}  

void JudgeStack()//判断在顺序站是否为空
{
	SqStack ptr=s;
	if(ptr.base==ptr.top)
		printf("\nstack null");
	else
		printf("\nstack is not null");
	back();
} 
  
void ClearStack()//清空顺序栈
{
	s.base=NULL;
	s.top=NULL;
	s.stacksize=0;
	back();
}

void LenghtStack()//顺序栈的长度
{
	SqStack ptr=s;
	printf("\nthe lenght is %d",ptr.top-ptr.base);
	back();
}

void GetTop()//获得栈顶元素
{
	SqStack ptr=s;
	if(ptr.base==ptr.top)
		printf("\nstack null");
	else
		printf("\nthe top elem is %d\n",*(ptr.top-1));
	back();
}
void OutStack()//出栈，删除栈顶元素
{
	printf("\n栈顶元素为%d,已删除",*(s.top-1));
	*(s.top-1)=NULL;
	s.top=s.top-1;
	back();

}

void conversion()//进制转换
{	
	int number;
	//ClearStack();//清空顺序栈
	CreatStack();//重新为顺序栈分配内存

	printf("\n输入需要转换的数：");
	scanf("%d",&number);
	while(number)
	{
		*s.top++ =number%8;
		number/=8;
	}
	printf("八进制数为：");
	PrintStack();
	back();
}

void pageshow_(){//界面显示
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
		gotoxy(14,12);
		printf("|\t\t\t\t\t\t\t\t|\n");
		gotoxy(15,12);
		printf("---------------------------------------------------------\n");
		gotoxy(35,2);
		printf("1.顺序栈创建\n");
		gotoxy(35,3);
		printf("2. 顺序栈销毁");
		gotoxy(35,4);
		printf("3. 判断栈空");
		gotoxy(35,5);
		printf("4. 清空顺序栈");
		gotoxy(35,6);
		printf("5. 测量栈长");
		gotoxy(35,7);
		printf("6. 获得栈顶");
		gotoxy(35,8);
		printf("7. 入栈");
		gotoxy(35,9);
		printf("8. 出栈");
		gotoxy(35,10);
		printf("9. 进制转换");
		gotoxy(35,11);
		printf("0. 输出顺序栈");
		gotoxy(30,13);
	}

void mainmeau()
{
	int choice;
	gotoxy(30,13);
	printf("please choice:");
	fflush(stdin);
	choice=getch();																		
																				
	switch(choice)
	{
		case '0':PrintStack();		break;
		case '1':InStack();			break;
		case '2':DestroyStack();		break;
		case '3':JudgeStack();			break;
		case '4':ClearStack();			break;
		case '5':LenghtStack();		break;
		case '6':GetTop();		break;
		case '7':InStack();			break;
		case '8':OutStack();			break;
		case '9':conversion();			break;
		
		default:printf("error!");
	}

}
void back()
 {
	 char backtomain;
	 
	 while(!kbhit())
	 {
		backtomain=getch();
	if(backtomain=='b')
	{
   	 system("cls");
	 pageshow_();
	 mainmeau(); 
	}
	else
		;
	 }
	 
 }
void main()
{
	
	pageshow_();
	mainmeau();
}
          