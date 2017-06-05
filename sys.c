#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#include"windows.h"
struct Student
{
	char number[20];
	char name[20];
	char elective[20];
	char required[20];
	char experiment[20];
	float sum;
	struct Student *next;
};
	struct Student *head;

	char CH;
	int judge=0,judge_=0;
	
	void gotoxy(int x,int y)
	{
		COORD pos={x,y};
			HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
		
		SetConsoleCursorPosition(hOut,pos);
	}


void save()

	{
		FILE *fp;
		fp=(fopen("link_list","wb"));
		if(fp==NULL)
		{
			printf("file wrong!!!\n");
			exit(0);
		}
		while(head)
		{
			if(fwrite(head,sizeof(struct Student)+1,1,fp)!=1)
			{
				printf("file write wrong!\n");
			}
			head=head->next;
		}
		fclose(fp);

	}
	
	void open()
	{
	
		struct Student *p1,*p2;
		FILE *fp;
		fp=(fopen("link_list","rb"));
		if(fp==NULL)
		{
			pageshow();
			mainmeau();
		}
		while(1)
		{
			p1=(struct Student*)malloc(sizeof(struct Student));
			fread(p1,sizeof(struct Student)+1,1,fp);
			p2=head;
			head=p1;
			p1->next=p2;
			if(feof(fp))
				break;
		}
		head=head->next;
		fclose(fp);
		
	}
		void printfall()
		{	
			int i;
			char ch;
			struct Student *ptr=head;
		
			if(head==NULL)
			{
				printf("û��ѧ����Ϣ����\n�Ƿ��������룿y/Y(yes)  n/N(no):");
				fflush(stdin);
				scanf("%c",&ch);
				switch(ch)
				{
					case 'y':
					case 'Y':scan();break;
					case 'n':
					case 'N':mainmeau();break;
					default:
			
					printf("�Բ������������Ϣ�޷�ʶ��3��󽫷������˵�����");
					Sleep(3000);
					fflush(stdin);
					system("cls");
					pageshow_();
					mainmeau();        
					break;
				}
				
			
			}
			else
			{
				printf("\n******************************************************************************\n");
				printf("ѧ��\t����\tѡ�޿γɼ�\tʵ��γɼ�\t���޿γɼ�\t�ܳɼ�\n");
				while(ptr)
				{
					printfLine(ptr);
					ptr=ptr->next;
		
				}
				printf("\n******************************************************************************\n");

			}
			 
		}

		
		

	
	

		int  printfLine(struct Student *ptr)
		{	
			if(ptr==NULL)
				return 0;
			printf("%s\t%s\t%s\t\t%s\t\t%s\t        %6.2f\n",ptr->number,ptr->name,ptr->elective,ptr->experiment,ptr->required,ptr->sum);
			return 1;
		}


		void order()//��Ϣ������
		{
			int count=0,i,j,k,flag;
			struct Student *first,*tail,*p_min,*min,*p;
			first=NULL;
			while(head!=NULL)
			{
				for(p=head,min=head;p->next!=NULL;p=p->next)
				{
					if(p->next->sum>min->sum)
					{
						p_min=p;
						min=p->next;
					}
				}
				if(first==NULL)
				{
					first=min;
					tail=min;
				}
				else
				{
					tail->next=min;
					tail=min;
				}
				if(min==head)
				{
					head=head->next;
				}
				else
				{
					p_min->next=min->next;
				}
			}
			if(first!=NULL)
				tail->next=NULL;
			head=first;
			if(judge_==0)
			{
				printf("��Ϣ������ɣ�����\n");
			}
			else
				if(judge_==1)
				{
					judge_=0;
					printf("������ɣ���\n");
				}
				printfall();
				Sleep(5000);
				system("cls");
				pageshow_();
				mainmeau();
		
			
			


		}
	
	int  scan()
	 {		
		char ch;
		struct Student *p1,*p2;
	
scan_1: p1=(struct Student *)malloc(sizeof(struct Student ));
	  
		printf("������ѧ�ţ�");
		scanf("%s" ,&p1->number);
		printf("������������");
		scanf("%s",p1->name);
		printf("������ѡ�޿γɼ���");
		scanf("%s",&p1->elective);
		printf("������ʵ��γɼ���");
		scanf("%s",&p1->experiment);
		printf("��������޿γɼ���");
		scanf("%s",&p1->required);
		printf("%s�Ѿ�����\n",p1->name);
		p1->sum=atof(p1->elective)+atof(p1->experiment)+atof(p1->required);
		p2=head;
		head=p1;
		p1->next=p2;
		fflush(stdin);//���������
		
		printf("�Ƿ������������ y/Y(yes)   n/N(no)?��");
		scanf("%c",&ch);
		switch(ch)
		{
			case 'y':
			case 'Y':goto scan_1;break;
			case 'n':
			case 'N':break;
			default:printf("�������Ϣ�޷�ʶ��3��󽫷������˵���\n");	break;
		}
		if(judge==0)
		{
			printf("������Ϣ�Ѵ洢��� ������ ");

			Sleep(3000);
			system("cls");
			pageshow_();
			mainmeau();
		}
		else
		if(judge==1)
		{
			judge_=1;
			judge=0;
			order();
		}




}

	
	
		void search()
		{
			char NO[20];
			int i;
			char ch;
			int flag=0;
			struct Student *ptr;
			fflush(stdin);
			if(head==NULL)
			{
				printf("û���κ�ѧ������Ϣ�޷�������Ѱ��������");	
				Sleep(3000);
				system("cls");
				pageshow_();
				mainmeau();
			}
		
			do
			{
				
				printf("\n******************************************************************************\n");
				printf("������Ҫ��ѯѧ����ѧ�ţ�");
				scanf("%s",NO);
				ptr=head;
				while(ptr)
				{
					if(strcmp(ptr->number,NO)==0)
					{
						flag=1;
						printf("\n******************************************************************************\n");
						printf("ѧ��\t����\tѡ�޿γɼ�\tʵ��γɼ� \t���޿γɼ�\t�ܳɼ�\n");
						printfLine(ptr);
						printf("\n******************************************************************************\n");
						
							
					}
				ptr=ptr->next;
				}	
				if(flag==1)
				{
					printf("�������");
					flag=0;
				}
					else
					{
						printf("û�д�ѧ������Ϣ������");
						flag=0;
					}
					printf("�Ƿ������ѯ��y/n����");
					fflush(stdin);
					scanf("%c",&ch);
			}while(ch=='y'||ch=='Y');
				Sleep(3000);
				system("cls");
				pageshow_();
				mainmeau();
		}
		void del()//ɾ����Ϣ����
		{
			char NO[20];
			char ch;
			int flag=0;
			struct Student *ptr=head,*pt=head;
			if(head==NULL)
			{
				printf("û���κ�ѧ������Ϣ�޷�����ɾ������3��󽫷������˵�����\n");
				Sleep(3000);
				system("cls");
				pageshow_();
				mainmeau();
			}
		else
		{
		do
		{
		
			flag=0;
			printf("������Ҫɾ����ѧ��ѧ�ţ�");
			
			scanf("%s",NO);
			ptr=head;
			while(ptr)
			{
			
				if(strcmp(ptr->number,NO)==0)
					
					if(ptr==head)
					{
						head=ptr->next;
						flag=1;
					}
				
					else
					{
						flag=1;
						pt->next=ptr->next;
						break;
	
					}
				else
					{
				pt=ptr;
				ptr=ptr->next;
					}
			}
			if(flag)
			printf("%s����Ϣ��ɾ������\n",ptr->name);
			else
				printf("û�д�ѧ������Ϣ��");
			printf("�Ƿ����ɾ����y/n:");
			fflush(stdin);
			scanf("%c",&ch);
		
			
		}while(ch=='y'||ch=='Y');
		}

			printfall();
			Sleep(3000);
			system("cls");
			pageshow_();
			mainmeau();

			
		

		}
		void change()
		{
			int num;
			char ch;
			char C;
			char NO[20];
			struct Student *ptr=head;
			if(head==NULL)
			{
				printf("û���κ�ѧ������Ϣ�޷������޸Ĳ�������");
				Sleep(3000);
				system("cls");
				pageshow_();
				mainmeau();
			}
			do
			{
			printf("\n*****************************************************\n");
			loop:	printf("������Ҫ�޸ĵ�ѧ������Ϣ��");
			scanf("%s",NO);
			while(ptr)
			{
				if(strcmp(ptr->number,NO)==0)
				{
					printf("ѧ�� [1]\n����[2]\nѡ�޿γɼ�[3]\nʵ��γɼ�[4]\n���޿γɼ�[5]\n");
					printf("ѡ��Ҫ�޸ĵ���Ϣ��\n");
					scanf("%d",&num);
					switch(num)
					{
					case 1:printf("����������ѧ�ţ�");
						scanf("%s",ptr->number);
						order();
						
						break;
					case 2:printf("����������������");
						scanf("%s",ptr->name);
						order();
						
						break;
					case 3:printf("����������ѡ�޿γɼ���");
						scanf("%s",ptr->elective);
						order();
						
						break;
					case 4:printf("����������ʵ��γɼ���");
						scanf("%s",ptr->experiment);
						order();
						
						break;
					case 5:printf("������������޿γɼ���");
						scanf("%s",ptr->required);
						order();
						
						break;
					default:printf("�Բ��� ��Ҫ�޸ĵ���Ϣ�����ڣ�����");
						Sleep(3000);
							system("cls");
							pageshow_();
							mainmeau();break;
					
						
						
					}
					
				}
				ptr=ptr->next;

				
			}

			printf("û�д�ѧ������Ϣ������\n�Ƿ�����޸�Iy/n?:");
			fflush(stdin);
			scanf("%c",&C);
			}while(C=='y'||C=='Y');
			Sleep(3000);
			system("cls");
			pageshow_();
			mainmeau();
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
	void count()
	{
		int count=0;
		struct Student *ptr=head;
		while(ptr)
		{
			count=count+1;
			ptr=ptr->next;
		}
		printf("һ����%dλѧ��",count);
		Sleep(3000);
		system("cls");
		pageshow_();
		mainmeau();
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
void exitsystem()
{
	system("cls");
	gotoxy(30,12);
	save();
	printf("���˳�\n");
	gotoxy(0,24);
	system("pause");
	
}
	int mainmeau()
	{
	
		printf("��ѡ����Ӧ�Ĺ��ܣ�");
		fflush(stdin);
scanf_ :scanf("%c",&CH);
		switch(CH)
		{
			case '0':exitsystem();		fflush(stdin);break;
			case '1':printfall();scan();fflush(stdin);break;
			case '2':search();			fflush(stdin);break;
			case '3':del();				fflush(stdin);break;
			case '4':change();						  break;
			case '5':insert();			fflush(stdin);break;
			case '6':order();			fflush(stdin);break;
			case '7':count();			fflush(stdin);break;
			case '8':printfall();		fflush(stdin);
			Sleep(5000);
			system("cls");
			pageshow_();
			mainmeau();
			break;
			default:printf("������� ���������룺");
			fflush(stdin);
			goto scanf_;
			break;
		}
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
		{
			gotoxy(30,12);
			printf("��¼�ɹ���");
			Sleep(3000);
			system("cls");
			system("color f4");
			open();
			pageshow();
			mainmeau();
		}
		else
		{
			gotoxy(30,12);
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
	}
void main()
{
	logon();
}





