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
		printf("请输入学生的姓名：");
		scanf("%s",p1_->name);
		printf("请输入学生的学号：");
		scanf("%s",p1_->num);
		printf("请输入学生的姓别：");
		scanf("%s",p1_->sex);
		p2_=head;
		p1_->next=p2_;
		head=p1_;
		
		printf("是否继续输入？y/n");	
		fflush(stdin);
		scanf("%c",&judgeflag);
	}while(judgeflag=='y'||judgeflag=='Y');


}
void printfall()
{
	struct student*ptr=head;
	while(ptr)
	{
		printf("学号%s\n姓名%s\n性别%s\n\n",ptr->num,ptr->name,ptr->sex );
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
		printf("请输入用户名：");
		scanf("%s",username);
		gotoxy(30,11);
		printf("请输入密码：");
		scanf("%s",password);
		if((strcmp(username,"admin")==0)&&(strcmp(password,"123456")==0))
		{gotoxy(30,12);
			printf("登录成功！");
			Sleep(3000);
			system("cls");
			system("color f4");
			return;
			
		}
		else
		{gotoxy(30,12);
			printf("登录失败");
			Sleep(1000);
			system("cls");
			times=times+1;

		}
		}while(times<3);
		gotoxy(20,11);
		printf("三次用户名或密码错误 无法登录，请重启程序！！\n");
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
		char *p="欢迎登录学生信息管理系统！！！";
		gotoxy(30,10);
	
		for(i=0;*(p+i)!='\0';i++)
		{
			printf("%c",*(p+i));
			Sleep(50);
		}
			Sleep(5000);
			system("cls");
			gotoxy(30,1);
			printf("正在搭建界面环境请稍候！！");
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
			printf("    已搭建完成！！              ");
			gotoxy(30,14);
return 0;
		
	}
	void mainmeau()
	{
		int chioce;
		printf("请选择相应的功能：\n");
		gotoxy(50,14);
		scanf("%d",&chioce);
	}
	void insert()//信息插入函数
		{
			int flag=0;
			
			struct Student *ptr=head,*pt,*p;;
			if(head==NULL)
			{
				printf("没有任何学生的信息无法进行插入！！");
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