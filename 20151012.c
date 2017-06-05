//1、	完成操作：单链表的创建、销毁、判断表空、
//测量表长、插入、删除、查询元素、清空单链表、
//取/单链表中指定位置上的元素、输出单链表。
//2、	设计菜单界面显示所有操作。

#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#include"windows.h"

void gotoxy(int x,int y){//定位光标函数
		COORD pos={x,y};
			HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleCursorPosition(hOut,pos);
	}
typedef struct List{
	int date;
	struct List *next;
}List;

List *head=NULL;

void back();
void mainmeau();

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
		printf("0. 链表创建\n");
		gotoxy(35,3);
		printf("1. 链表销毁");
		gotoxy(35,4);
		printf("2. 判断表空");
		gotoxy(35,5);
		printf("3. 测量表长");
		gotoxy(35,6);
		printf("4. 插入元素");
		gotoxy(35,7);
		printf("5. 删除元素");
		gotoxy(35,8);
		printf("6. 查询元素");
		gotoxy(35,9);
		printf("7. 链表清空");
		gotoxy(35,10);
		printf("8. 取链表元素");
		gotoxy(35,11);
		printf("9. 输出链表");
		gotoxy(30,13);
	}

void Create()//链表创建函数
{
	List *p1;
	char ch;
	do
	{	
		p1=(List*)malloc(sizeof(List));
		printf("\nplease input the date:");
		scanf("%d",&p1->date);
		
		p1->next=head;
		head=p1;
		printf("continue?(y/n):\n");
		fflush(stdin);
		ch=getch();

	}while(ch=='y'||ch=='Y');
	printf("input succeed!\n");
	back();
}

void Destroy()//销毁链表
{
	free(head);//释放掉内存
	back();
}

void JudgeNull()//判断是否为空
{
	if(head==NULL)
	printf("the list NULL");
	else
	printf("the list NOT NULL");
	back();
}

void ListLenght()//测量表长
{
	List *ptr=head;
	int count=0;
	while(ptr)
	{
		count++;
		ptr=ptr->next;
	}
	printf("List lenght is %d",count);
	back();
}

void Print()//输出链表
{
	List *ptr=head;
	while(ptr)
	{
		printf("\n%d",ptr->date);
		ptr=ptr->next;
	}
	back();
}

void Insert()//插入元素
{
	List *ptr=head,*pt,*p1;
	int location,i;
	p1=(List*)malloc(sizeof(List));
	printf("please input location:");
	scanf("%d",&location);
	printf("please input date:");
	scanf("%d",&p1->date);
	for(i=0;i<location-1;i++)
	{
		pt=ptr;
		ptr=ptr->next;
	}
	pt->next=p1;
	p1->next=ptr;
	back();
		
}

void Delete()//删除元素
{
	List *ptr=head;
	 int location,i;
	 printf("please input location:");
	 scanf("%d",location);
	 for(i=0;i<location-1;i++)
		 ptr=ptr->next;
	 ptr->next=ptr->next->next;
	 back();
}

void Search()//查询元素
{
	List *ptr=head;
	int location,i;
	printf("please input location:");
	scanf("%d",&location);
	for(i=0;i<location-1;i++)
		ptr=ptr->next;
	printf("the %d elem is %d",location,ptr->date);
	back();
}

void Clear()
{
	head=NULL;
	back();
}

void GetElem()
{
	List *ptr=head;
	int location,i;
	printf("please input the location:");
	for(i=0;i<location;i++)
	{
		ptr=ptr->next;
	}
	printf(" the %d elem is%d",ptr->date);
	back();

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
void mainmeau()
{
	int choice;
	gotoxy(30,13);
	printf("please choice:");
	fflush(stdin);
	choice=getch();																		
																				
	switch(choice)
	{
		case '0':Create();		break;
		case '1':Destroy();		break;
		case '2':JudgeNull();	break;
		case '3':ListLenght();	break;
		case '4':Insert();		break;
		case '5':Delete();		break;
		case '6':Search();		break;
		case '7':Clear();		break;
		case '8':GetElem();		break;
		case '9':Print();		break;
		default:printf("error!");
	}

}
void main()
{
	pageshow_();
	mainmeau();
}
