/*1、	完成操作：链队列的创建、销毁、判断队列空、
清空队列、测量队列的长度、获得队头元素、入队、出队、判断回文。
2、	设计菜单界面显示所有操作。
*/

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
struct Queue{
	int data;
	struct Queue *next;
	
};

struct linkqueue 
{
struct Queue *front;
struct Queue *tail;
};

struct linkqueue Q;
void InitQueue()
{
	 Q.tail=(struct Queue*)malloc(sizeof(struct Queue));	
	Q.front=Q.tail;
	Q.tail->next=NULL;
}
void CreatQueue()
{
	char judge;
	struct Queue *ptr;
	 do
	 {
		 
	printf("请输入数据：");
	  ptr=(struct Queue*)malloc(sizeof(struct Queue));							//头出尾进
		scanf("%d",&ptr->data);	
	  Q.tail->next=ptr;
	  Q.tail=ptr;
		printf("是否继续？y/n：");
		fflush(stdin);
			scanf("%c",&judge);
	 }while(judge=='y'||judge=='Y');
	 back();
}
void	DestroyQueue()
{
	free(Q.front);
	free(Q.tail);
	back();
}

void JudgeQueue()
{
	if(Q.front==Q.tail)
		printf("队列为空！");
	else
		printf("队列不为空！");
	back();

}
void ClearQueue()
{
	Q.front=NULL;
	Q.tail=NULL;
	back();
}

void LenghtQueue()
{
	printf("队列的长度为%d",Q.tail-Q.front);
	back();
}

void GetFront()
{
	printf("队头元素为%d",Q.front->next->data);
}
void main()
{
	InitQueue();
	CreatQueue();
	while(Q.front!=Q.tail)
	{
	printf("%d",Q.front->next->data);
	Q.front=Q.front->next;
	}
}         
