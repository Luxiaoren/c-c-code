//1��	��ɲ�����������Ĵ��������١��жϱ�ա�
//�����������롢ɾ������ѯԪ�ء���յ�����
//ȡ/��������ָ��λ���ϵ�Ԫ�ء����������
//2��	��Ʋ˵�������ʾ���в�����

#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#include"windows.h"

void gotoxy(int x,int y){//��λ��꺯��
		COORD pos={x,y};
			HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleCursorPosition(hOut,pos);
	}
typedef struct List{
	int date;
	struct List *next;
}List;
List *head=NULL;
void pageshow_(){//������ʾ
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
		printf("0. ������\n");
		gotoxy(35,3);
		printf("1. ��������");
		gotoxy(35,4);
		printf("2. �жϱ��");
		gotoxy(35,5);
		printf("3. ������");
		gotoxy(35,6);
		printf("4. ����Ԫ��");
		gotoxy(35,7);
		printf("5. ɾ��Ԫ��");
		gotoxy(35,8);
		printf("6. ��ѯԪ��");
		gotoxy(35,9);
		printf("7. �������");
		gotoxy(35,10);
		printf("8. ȡ����Ԫ��");
		gotoxy(35,11);
		printf("9. �������");
		gotoxy(30,13);
	}
void Create()//����������
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

}
void Destroy()//��������
{
	free(head);//�ͷŵ��ڴ�
}
void JudgeNull()//�ж��Ƿ�Ϊ��
{
	if(head==NULL)
	printf("the list NULL");
	else
	printf("the list NOT NULL");
}

void ListLenght()//������
{
	List *ptr=head;
	int count=0;
	while(ptr)
	{
		count++;
		ptr=ptr->next;
	}
	printf("List lenght is %d",count);
}
void Print()//�������
{
	List *ptr=head;
	while(ptr)
	{
		printf("%d\n",ptr->date);
		ptr=ptr->next;
	}
}
void Insert()//����Ԫ��
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
		
}
void Delete()//ɾ��Ԫ��
{
	List *ptr=head;
	 int location,i;
	 printf("please input location:");
	 scanf("%d",location);
	 for(i=0;i<location-1;i++)
		 ptr=ptr->next;
	 ptr->next=ptr->next->next;
}
void Search()
{
	List *ptr=head;
	int location,i;
	printf("please input location:")
	scanf("%d",&location);
	for(i=0;i<location-1;i++)
		ptr=ptr->next;
	printf("the %d elem is %d",location,ptr->date);
}
int main()
{
	pageshow_();
	Create();
	Print();
	JudgeNull();
	Insert();
	Print();
}
