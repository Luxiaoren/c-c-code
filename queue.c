/*1��	��ɲ����������еĴ��������١��ж϶��пա���ն��С�
�������еĳ��ȡ���ö�ͷԪ�ء���ӡ����ӡ��жϻ��ġ�
2��	��Ʋ˵�������ʾ���в�����
*/

#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#include"windows.h"
#define STACK_INIT_SIZE 100
#define STACKINCREMENT  10
#define OVERFLOW  -2
#define OK		  1
void gotoxy(int x,int y){//��λ��꺯��
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
		 
	printf("���������ݣ�");
	  ptr=(struct Queue*)malloc(sizeof(struct Queue));							//ͷ��β��
		scanf("%d",&ptr->data);	
	  Q.tail->next=ptr;
	  Q.tail=ptr;
		printf("�Ƿ������y/n��");
		fflush(stdin);
			scanf("%c",&judge);
	 }while(judge=='y'||judge=='Y');
	  
	   
}
void DestroyQueue()
{
	free(Q.front);

}

void JudgeQueue()
{
	if(Q.front==Q.tail)
		printf("����Ϊ��\n");
	else
		printf("���в�Ϊ��\n");

}

void ClearQueue()
{
	
}
void main()
{
	InitQueue();
	CreatQueue();
	while(Q.front!=Q.tail)
	{
	printf("%d",Q.front->data);
	Q.front=Q.front->next;
	}
}  
