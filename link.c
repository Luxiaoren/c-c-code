#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#define OK 1
#define OVERFLOW -2
#define ERROR 0
typedef  ElemType int 
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;
void back();

void gotoxy(int x,int y)
{
	COORD pos={x,y};
		HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE)
	SetConsoleCursorPosition(hOut,pos);
}

void CreateList_L(LinkList &L,int n)
{//��λ������n��Ԫ�ص�ֵ����������ͷ�Խ��ĵ������Ա�L
	L=(LinkList)malloc(sizeof((LNode));
	L->next=NULL;       //�Ƚ���һ����ͷ���ĵ�����
	for(i=n;i>0;--i)
	{
		p=(LinkList)malloc(sizeof(LNode));//�����½��
		scanf("%d",&p->data);                  //����Ԫ��ֵ
		p->next=L->next;                  //���뵽��ͷ
		L->next=p;
	}
}

int Malloc_SL(SLinkList &space)//�жϱ��
{
	i=space[0].cur;
	if(space[0].cur)space[0].cur=space[i].cur;
	return i;
}

void DestroyList_L(LNode *head)//���ٵ�����
{
	LNode *p,*q��
	p=head;
	q=head->next;
	while(p)
	{
		free(p);
		p=q;  //ʹ��ָ���ж���ǿ�
		if(q)
		q=q->next;
	}
}

void setnull(struct LNode **p)//�ÿձ�
{
	*p=NULL;
}

int length(struct LNode **p)//�ⳤ��
{
	int n=0;
	struct LNode *q=*p;
	while(q!=NULL)
	{
		n++;
		q=q->next;
	}
	return(n);
}

void insert(struct LNode **p,ElemType x,int i)
{
	int j=1;
	struct LNode *s,*q;
	s=(struct LNode *)malloc(sizeof(struct LNode));//����Ҫ����Ľ��s
	s->data=x;
	q=*p;
	if(i==1)//����Ľ����Ϊͷ���
	{
		s->next=q;
		*p=s;
	}
	else
	{
		while(j<i-1&&q->next!=NULL)//���ҵ�i-1�����
		{
			q=q->next;
			j++;
		}
		if(j==i-1)//�ҵ���i-1�����
		{
			s->next=q->next;
			q->next=s;
		}
		else
			printf("λ�ò�������ȷ��\n");
	}
}

void del(struct LNode **p,int i)
{
	int j=1;
	struct LNode *q=*p,*t;
	if(i==1)//ɾ�������ͷ���
	{
		t=q;
		*p=q->next;
	}
	else
	{
		while(j<i-1&&q->next!=NULL)//���ҵ�i-1�����
		{
			q=q->next;
			j++;
		}
	}
	if(q->next!=NULL&&j==i-1)//�ҵ���i-1����㣬��qָ����
	{
		t=q->next;//tָ��Ҫɾ���Ľ��
		q->next=t->next;//��q֮��Ľ��ɾ��
	}
	if(t!=NULL)//��t��Ϊ��ʱ�ͷŸý��
		free(t);
}
int locate(LNode **p,ElemType x)//����Ԫ��
{
	int n=0;
	struct Lnode *q=*p;
	while(q!=NULL&&q->data!=x)//����data��Ϊx�ĵ�һ�����
	{
		q=q->next;
		n++;
	}
	if(q==NULL)//δ�ҵ�data�����x�Ľ��
		return(-1);
	else
		return(n+1);
}


ElemType get(struct LNode **p,int i)//ȡָ��λ��Ԫ��
{
	int j=1;
	struct LNode *q=*p;
	while(j<i&&q!=NULL)//���ҵ�i�����
	{
		q=q->next;
		j++;
	}
	if(q!=NULL)//�ҵ��˵�i�����
		return(q->data);
	else
		printf("λ�ò�������ȷ��\n");
	return NULL;
}

void display(struct LNode **p)//��ʾ����
{
	struct LNode *q;
	q=*p;
	printf("��������ʾ��")��
	if(q==NULL);//������Ϊ��ʱ
		printf("����Ϊ�գ�")��
	else
		if(q->next==NULL)//����ֻ��һ�����ʱ
			printf("%c\n",q->data);
		else//�������һ�����Ͻ��ʱ
		{
			while(q->next!=NULL)//��ʾǰ��Ľ��
			{
				printf("%c",q->data);
				q=q->next;
			}
			printf("%c",q->data);//��ʾ���һ�����
		}
		printf("\n");
}

void pageshow_()
{//������ʾ
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
	printf("0. ˳�����\n");
	gotoxy(35,3);
	printf("1. ˳�������");
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
	printf("7. ˳������");
	gotoxy(35,10);
	printf("8. ȡ˳���Ԫ��");
	gotoxy(35,11);
	printf("9. ���˳���");
	gotoxy(30,13);
}

void mainmeau()
{//���˵�
   char  choice;
    printf("please choice:");
	fflush(stdin);
   	choice=_getch();

    switch(choice)
	{
        case '0':printf("\n");CreatList();break;
        case '1':printf("\n");DestroyList();break;
        case '2':printf("\n");JudgeList();break;
        case '3':printf("\n");MeterList();break;
        case '4':printf("\n");InsertList();break;
        case '5':printf("\n");DeleteList();break;
        case '6':printf("\n");SearchList();break;
        case '7':printf("\n");ClearList();break;
        case '8':printf("\n");GetElem();break;
        case '9':printf("\n");PutoutList();break;
        default :printf("\n");printf("input error!!");
			back();
			
    }


}
void back()
{
    Sleep(3000);
    system("cls");
	pageshow_();
	mainmeau();
 }
int main()
{
	system("cls");
    InitList();
    pageshow_();
    mainmeau();

	return 0;
}
