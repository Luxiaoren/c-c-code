#include "system.h"
void gotoxy(int x,int y)
	{
		COORD pos={x,y};
			HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
		
		SetConsoleCursorPosition(hOut,pos);
	}

void cread_linklist()
{
	char judgeflag;
	struct student *p1_,*p2_;
	do
	{
	
		p1_=(struct student *)malloc(sizeof(struct student));
		printf("������ѧ����������");
		scanf("%s",p1_->name);
		printf("������ѧ����ѧ�ţ�");
		scanf("%s",p1_->num);
		printf("������ѧ�����ձ�");
		scanf("%s",p1_->sex);
		p2_=head;
		p1_->next=p2_;
		head=p1_;
		
		printf("�Ƿ�������룿y/n");	
		fflush(stdin);
		scanf("%c",&judgeflag);
	}while(judgeflag=='y'||judgeflag=='Y');


}
void printfall()
{
	struct student*ptr=head;
	while(ptr)
	{
		printf("ѧ��%s\n����%s\n�Ա�%s\n\n",ptr->num,ptr->name,ptr->sex );
		ptr=ptr->next;
	}
}
void open_()
{
	open();
	printfall();
}
void save_()
{
	cread_linklist();
	save();
}
void logon()
	{
		system("cls");
		int times=0;
		char key;
		char username[20];
		char password[20];
		do
		{
		gotoxy(30,10);
		printf("�������û�����");
		scanf("%s",username);
		gotoxy(30,11);
		printf("���������룺");
		scanf("%s",password);
		if((strcmp(username,"admin")==0)&&(strcmp(password,"123456")==0))
		{gotoxy(30,12);
			printf("��¼�ɹ���");
			Sleep(3000);
			system("cls");
			system("color f4");
			return;
			
		}
		else
		{gotoxy(30,12);
			printf("��¼ʧ��");
			Sleep(1000);
			system("cls");
			times=times+1;

		}
		}while(times<3);
		gotoxy(20,11);
		printf("�����û������������ �޷���¼�����������򣡣�\n");
			gotoxy(0,24);
			system("pause");
			return ;

	}
	int pageshow_()
	{
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
			gotoxy(35,2);
			printf("0. exit\n");
			gotoxy(35,3);
			printf("1. input record");
			gotoxy(35,4);
			printf("2. search record");
			gotoxy(35,5);
			printf("3. delete record");
			gotoxy(35,6);
			printf("4. modify record");
			gotoxy(35,7);
			printf("5. insert record");
			gotoxy(35,8);
			printf("6. order");
			gotoxy(35,9);
			printf("7. number");
			gotoxy(35,10);
			printf("8. show");
			gotoxy(30,12);
return 0;
		
	}
	int pageshow()
	{	
		int i;
		char *p="��ӭ��¼ѧ����Ϣ����ϵͳ������";
		gotoxy(30,10);
	
		for(i=0;*(p+i)!='\0';i++)
		{
			printf("%c",*(p+i));
			Sleep(50);
		}
			Sleep(5000);
			system("cls");
			gotoxy(30,1);
			printf("���ڴ���滷�����Ժ򣡣�");
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
			printf("    �Ѵ��ɣ���              ");
			gotoxy(30,14);
return 0;
		
	}
	void mainmeau()
	{
		int chioce;
		printf("��ѡ����Ӧ�Ĺ��ܣ�\n");
		gotoxy(50,14);
		scanf("%d",&chioce);
	}
	void insert()//��Ϣ���뺯��
		{
			int flag=0;
			
			struct Student *ptr=head,*pt,*p;;
			if(head==NULL)
			{
				printf("û���κ�ѧ������Ϣ�޷����в��룡��");
				Sleep(3000);
				system("cls");
				pageshow_();
				mainmeau();
			}
			else
			{
				judge=1;
				
				scan();
			}
		
		
		return;
	}
void main()
{

	logon();
	pageshow();
	mainmeau();
	
	
}