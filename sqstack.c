/*��ɲ�����˳��ջ�Ĵ��������٣��ж�ջ�գ����ջ������ջ�ĳ��ȣ�
���ջ��Ԫ�أ���ջ����ջ������ת����ʮ���Ƶ��˽��ƣ�*/

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
typedef struct    sqstack{
		int *top;
		int *base;
		int stacksize;
}SqStack;
SqStack s;
void back();
void CreatStack()//��ʼ��˳��ջ
{
	s.base=(int *)malloc(STACK_INIT_SIZE*sizeof(int));//Ϊ˳��ջ�����ڴ�
	if(!s.base)
		exit(OVERFLOW);
	s.top=s.base;
	s.stacksize=STACK_INIT_SIZE;
	return OK;

}
void InStack()//��ջ
{
	int i;
	int elem;
	int elemnumber;
	printf("\nElem number:");
	scanf("%d",&elemnumber);
	for(i=0;i<elemnumber;i++)
	{
		if(s.top -  s.base>=s.stacksize)//�ж�˳��ջ�Ƿ����
		{
			s.base=(int *)malloc((s.stacksize+STACKINCREMENT)*sizeof(int));//���������ַ  ��ԭ���ĵ�ַ��STACKINCREMENT
		s.top=s.base+s.stacksize;
		s.stacksize+=STACKINCREMENT;
		}
		printf("inut elem:");
		scanf("%d",s.top);
		s.top++;
	}
	back();
}
void PrintStack()//���˳��ջ
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
void DestroyStack()//����˳��ջ
{
	free(s.base);
	back();
}  

void JudgeStack()//�ж���˳��վ�Ƿ�Ϊ��
{
	SqStack ptr=s;
	if(ptr.base==ptr.top)
		printf("\nstack null");
	else
		printf("\nstack is not null");
	back();
} 
  
void ClearStack()//���˳��ջ
{
	s.base=NULL;
	s.top=NULL;
	s.stacksize=0;
	back();
}

void LenghtStack()//˳��ջ�ĳ���
{
	SqStack ptr=s;
	printf("\nthe lenght is %d",ptr.top-ptr.base);
	back();
}

void GetTop()//���ջ��Ԫ��
{
	SqStack ptr=s;
	if(ptr.base==ptr.top)
		printf("\nstack null");
	else
		printf("\nthe top elem is %d\n",*(ptr.top-1));
	back();
}
void OutStack()//��ջ��ɾ��ջ��Ԫ��
{
	printf("\nջ��Ԫ��Ϊ%d,��ɾ��",*(s.top-1));
	*(s.top-1)=NULL;
	s.top=s.top-1;
	back();

}

void conversion()//����ת��
{	
	int number;
	//ClearStack();//���˳��ջ
	CreatStack();//����Ϊ˳��ջ�����ڴ�

	printf("\n������Ҫת��������");
	scanf("%d",&number);
	while(number)
	{
		*s.top++ =number%8;
		number/=8;
	}
	printf("�˽�����Ϊ��");
	PrintStack();
	back();
}

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
		printf("1.˳��ջ����\n");
		gotoxy(35,3);
		printf("2. ˳��ջ����");
		gotoxy(35,4);
		printf("3. �ж�ջ��");
		gotoxy(35,5);
		printf("4. ���˳��ջ");
		gotoxy(35,6);
		printf("5. ����ջ��");
		gotoxy(35,7);
		printf("6. ���ջ��");
		gotoxy(35,8);
		printf("7. ��ջ");
		gotoxy(35,9);
		printf("8. ��ջ");
		gotoxy(35,10);
		printf("9. ����ת��");
		gotoxy(35,11);
		printf("0. ���˳��ջ");
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
          