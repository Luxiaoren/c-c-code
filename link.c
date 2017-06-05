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
{//逆位序输入n个元素的值，建立带表头脑结点的单链线性表L
	L=(LinkList)malloc(sizeof((LNode));
	L->next=NULL;       //先建立一个带头结点的单链表
	for(i=n;i>0;--i)
	{
		p=(LinkList)malloc(sizeof(LNode));//生成新结点
		scanf("%d",&p->data);                  //输入元素值
		p->next=L->next;                  //插入到表头
		L->next=p;
	}
}

int Malloc_SL(SLinkList &space)//判断表空
{
	i=space[0].cur;
	if(space[0].cur)space[0].cur=space[i].cur;
	return i;
}

void DestroyList_L(LNode *head)//销毁单链表
{
	LNode *p,*q；
	p=head;
	q=head->next;
	while(p)
	{
		free(p);
		p=q;  //使用指针判断其非空
		if(q)
		q=q->next;
	}
}

void setnull(struct LNode **p)//置空表
{
	*p=NULL;
}

int length(struct LNode **p)//测长度
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
	s=(struct LNode *)malloc(sizeof(struct LNode));//建立要插入的结点s
	s->data=x;
	q=*p;
	if(i==1)//插入的结点作为头结点
	{
		s->next=q;
		*p=s;
	}
	else
	{
		while(j<i-1&&q->next!=NULL)//查找第i-1个结点
		{
			q=q->next;
			j++;
		}
		if(j==i-1)//找到第i-1个结点
		{
			s->next=q->next;
			q->next=s;
		}
		else
			printf("位置参数不正确！\n");
	}
}

void del(struct LNode **p,int i)
{
	int j=1;
	struct LNode *q=*p,*t;
	if(i==1)//删除链表的头结点
	{
		t=q;
		*p=q->next;
	}
	else
	{
		while(j<i-1&&q->next!=NULL)//查找第i-1个结点
		{
			q=q->next;
			j++;
		}
	}
	if(q->next!=NULL&&j==i-1)//找到第i-1个结点，由q指向它
	{
		t=q->next;//t指向要删除的结点
		q->next=t->next;//将q之后的结点删除
	}
	if(t!=NULL)//在t不为空时释放该结点
		free(t);
}
int locate(LNode **p,ElemType x)//查找元素
{
	int n=0;
	struct Lnode *q=*p;
	while(q!=NULL&&q->data!=x)//查找data域为x的第一个结点
	{
		q=q->next;
		n++;
	}
	if(q==NULL)//未找到data域等于x的结点
		return(-1);
	else
		return(n+1);
}


ElemType get(struct LNode **p,int i)//取指定位置元素
{
	int j=1;
	struct LNode *q=*p;
	while(j<i&&q!=NULL)//查找第i个结点
	{
		q=q->next;
		j++;
	}
	if(q!=NULL)//找到了第i个结点
		return(q->data);
	else
		printf("位置参数不正确！\n");
	return NULL;
}

void display(struct LNode **p)//显示链表
{
	struct LNode *q;
	q=*p;
	printf("单链表显示：")；
	if(q==NULL);//单链表为空时
		printf("链表为空！")；
	else
		if(q->next==NULL)//链表只有一个结点时
			printf("%c\n",q->data);
		else//链表存在一个以上结点时
		{
			while(q->next!=NULL)//显示前面的结点
			{
				printf("%c",q->data);
				q=q->next;
			}
			printf("%c",q->data);//显示最后一个结点
		}
		printf("\n");
}

void pageshow_()
{//界面显示
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
	printf("0. 顺序表创建\n");
	gotoxy(35,3);
	printf("1. 顺序表销毁");
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
	printf("7. 顺序表清空");
	gotoxy(35,10);
	printf("8. 取顺序表元素");
	gotoxy(35,11);
	printf("9. 输出顺序表");
	gotoxy(30,13);
}

void mainmeau()
{//主菜单
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
