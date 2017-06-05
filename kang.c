#include"stdio.h"
#include"stdlib.h"
#include"conio.h"

#include"windows.h"
	
struct Student
{
	char number[20];
	char name[20];
	char elective[20];
	char experiment[20];
	char required[20];
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


		void printfall()
	{	
			int i;
			char ch;
		struct Student *ptr=head;
		fflush(stdin);
		if(head==NULL)
		{
			printf("濞屸剝婀佺�锔炬晸娣団剝浼呴敍渚婄磼\n閺勶拷鎯侀悳鏉挎躬鏉堟挸鍙嗛敍鐒�Y(yes)  n/N(no):");
			scanf("%c",&ch);
			switch(ch)
			{
			case 'y':
			case 'Y':scan();break;
			case 'n':
			case 'N':mainmeau();break;
			default:
			
				printf("鐎甸�绗夌挧閿嬪亶鏉堟挸鍙嗛惃鍕�繆閹�拷妫ゅ▔鏇＄槕閸掞拷绱�缁夋帒鎮楃亸鍡氱箲閸ョ偘瀵岄懣婊冨礋閿涗緤绱�);
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
			printf("鐎涳箑褰縗t婵�挸鎮昞t闁��鎱ㄧ拠鐐�灇缂佲�t鐎圭偤鐛欑拠鐐�灇缂佲�t韫囧懍鎱ㄧ拠鐐�灇缂佲�t閹�粯鍨氱紒鈥恘");
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


		void order()//娣団剝浼呴幒鎺戠碍閸戣姤鏆�
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
			printf("娣団剝浼呴幒鎺戠碍鐎瑰本鍨氶敍渚婄磼閿涗箺n");
			}
			else
				if(judge_==1)
				{
					judge_=0;
				printf("閹绘帒鍙嗙�灞惧灇閿涗緤绱抃n");
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
	
scan_1:     p1=(struct Student *)malloc(sizeof(struct Student ));
	  
	printf("鐠囩柉绶�崗銉ワ拷閸欏嚖绱�);
	scanf("%s" ,&p1->number);
	printf("鐠囩柉绶�崗銉ワ拷閸氬稄绱�);
	scanf("%s",p1->name);
	printf("鐠囩柉绶�崗銉╋拷娣囷拷锟介幋鎰�摋閿涳拷);
	scanf("%s",&p1->elective);
	printf("鐠囩柉绶�崗銉ョ杽妤犲矁锟介幋鎰�摋閿涳拷);
	scanf("%s",&p1->experiment);
	printf("鐠囩柉绶�崗銉ョ箑娣囷拷锟介幋鎰�摋閿涳拷);
	scanf("%s",&p1->required);
	printf("%s瀹歌尙绮＄�妯哄弳\n",p1->name);
	p1->sum=atof(p1->elective)+atof(p1->experiment)+atof(p1->required);
	p2=head;
	head=p1;
	p1->next=p2;
	fflush(stdin);//濞撳懘娅庣紓鎾冲暱閸栵拷
	
	printf("閺勶拷鎯佺紒褏鐢绘潏鎾冲弳閺佺増宓�y/Y(yes)   n/N(no)?閿涳拷);
	scanf("%c",&ch);
	switch(ch)
	{
	case 'y':
	case 'Y':goto scan_1;break;
	case 'n':
	case 'N':break;
	default:printf("鏉堟挸鍙嗛惃鍕�繆閹�拷妫ゅ▔鏇＄槕閸掞拷绱�缁夋帒鎮楃亸鍡氱箲閸ョ偘瀵岄懣婊冨礋閿涗箺n");	break;
	}
if(judge==0)
{
printf("閹碉拷婀佹穱鈩冧紖瀹告彃鐡ㄩ崒銊ョ暚閹达拷閿涗緤绱掗敍锟�);

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
				printf("濞屸剝婀佹禒璁崇秿鐎涳妇鏁撻惃鍕�繆閹�拷妫ゅ▔鏇＄箻鐞涘本鎮崇�浼欑磼閿涗緤绱掗敍锟�;	
				Sleep(3000);
				system("cls");
				pageshow_();
				mainmeau();
			}
		
			do
			{
				
				printf("\n******************************************************************************\n");
				printf("鐠囩柉绶�崗銉�拷閺屻儴锟界�锔炬晸閻ㄥ嫬锟介崣鍑ょ窗");
				scanf("%s",NO);
				ptr=head;
				while(ptr)
				{
					if(strcmp(ptr->number,NO)==0)
					{
						flag=1;
						printf("\n******************************************************************************\n");
						printf("鐎涳箑褰縗t婵�挸鎮昞t闁��鎱ㄧ拠鐐�灇缂佲�t鐎圭偤鐛欑拠鐐�灇缂侊拷\t韫囧懍鎱ㄧ拠鐐�灇缂佲�t閹�粯鍨氱紒鈥恘");
						printfLine(ptr);
						printf("\n******************************************************************************\n");
						
							
					}
				ptr=ptr->next;
				}	
				if(flag==1)
				{
					printf("閺屻儲澹樼�灞剧槸");
					flag=0;
				}
					else
					{
						printf("濞屸剝婀佸�銈咃拷閻㈢喓娈戞穱鈩冧紖閿涗緤绱掗敍锟�;
						flag=0;
					}
					printf("閺勶拷鎯佺紒褏鐢婚弻銉�拷閿涚劕/n閿涚噦绱�);
					fflush(stdin);
					scanf("%c",&ch);
			}while(ch=='y'||ch=='Y');
				Sleep(3000);
				system("cls");
				pageshow_();
				mainmeau();
		}
		void del()//閸掔娀娅庢穱鈩冧紖閸戣姤鏆�
		{
			char NO[20];
			char ch;
			int flag=0;
			struct Student *ptr=head,*pt=head;
			if(head==NULL)
			{
				printf("濞屸剝婀佹禒璁崇秿鐎涳妇鏁撻惃鍕�繆閹�拷妫ゅ▔鏇＄箻鐞涘苯鍨归梽銈嗘惙娴ｏ拷缁夋帒鎮楃亸鍡氱箲閸ョ偘瀵岄懣婊冨礋閿涗緤绱抃n");
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
			printf("鐠囩柉绶�崗銉�拷閸掔娀娅庨惃鍕�拷閻㈢喎锟介崣鍑ょ窗");
			
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
			printf("%s閻ㄥ嫪淇婇幁锟藉嚒閸掔娀娅庨敍渚婄磼\n",ptr->name);
			else
				printf("濞屸剝婀佸�銈咃拷閻㈢喓娈戞穱鈩冧紖閿涳拷);
			printf("閺勶拷鎯佺紒褏鐢婚崚鐘绘珟閿涚劕/n:");
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
				printf("濞屸剝婀佹禒璁崇秿鐎涳妇鏁撻惃鍕�繆閹�拷妫ゅ▔鏇＄箻鐞涘奔鎱ㄩ弨瑙勬惙娴ｆ粣绱掗敍锟�;
				Sleep(3000);
				system("cls");
				pageshow_();
				mainmeau();
			}
			do
			{
			printf("\n*****************************************************\n");
			loop:	printf("鐠囩柉绶�崗銉�拷娣囷拷鏁奸惃鍕�拷閻㈢喓娈戞穱鈩冧紖閿涳拷);
			scanf("%s",NO);
			while(ptr)
			{
				if(strcmp(ptr->number,NO)==0)
				{
					printf("鐎涳箑褰�[1]\n婵�挸鎮昜2]\n闁��鎱ㄧ拠鐐�灇缂侊拷3]\n鐎圭偤鐛欑拠鐐�灇缂侊拷4]\n韫囧懍鎱ㄧ拠鐐�灇缂侊拷5]\n");
					printf("闁��瀚ㄧ憰浣锋叏閺�湱娈戞穱鈩冧紖閿涙瓡n");
					scanf("%d",&num);
					switch(num)
					{
					case 1:printf("鐠囩兘鍣搁弬鎷岀翻閸忋儱锟介崣鍑ょ窗");
						scanf("%s",ptr->number);
						order();
						
						break;
					case 2:printf("鐠囩兘鍣搁弬鎷岀翻閸忋儱锟介崥宥忕窗");
						scanf("%s",ptr->name);
						order();
						
						break;
					case 3:printf("鐠囩兘鍣搁弬鎷岀翻閸忋儵锟芥穱锟斤拷閹存劗鍝楅敍锟�;
						scanf("%s",ptr->elective);
						order();
						
						break;
					case 4:printf("鐠囩兘鍣搁弬鎷岀翻閸忋儱鐤勬�宀冿拷閹存劗鍝楅敍锟�;
						scanf("%s",ptr->experiment);
						order();
						
						break;
					case 5:printf("鐠囩兘鍣搁弬鎷岀翻閸忋儱绻�穱锟斤拷閹存劗鍝楅敍锟�;
						scanf("%s",ptr->required);
						order();
						
						break;
					default:printf("鐎甸�绗夌挧锟介幃銊�拷娣囷拷鏁奸惃鍕�繆閹�拷绗夌�妯烘躬閿涗緤绱掗敍锟�;
						Sleep(3000);
							system("cls");
							pageshow_();
							mainmeau();break;
					
						
						
					}
					
				}
				ptr=ptr->next;

				
			}

			printf("濞屸剝婀佸�銈咃拷閻㈢喓娈戞穱鈩冧紖閿涗緤绱掗敍涔梟閺勶拷鎯佺紒褏鐢绘穱锟芥暭Iy/n?:");
			fflush(stdin);
			scanf("%c",&C);
			}while(C=='y'||C=='Y');
			Sleep(3000);
					system("cls");
							pageshow_();
							mainmeau();
			
			return;
			
		}
		
		void insert()//娣団剝浼呴幓鎺戝弳閸戣姤鏆�
		{
			int flag=0;
			
			struct Student *ptr=head,*pt,*p;;
			if(head==NULL)
			{
				printf("濞屸剝婀佹禒璁崇秿鐎涳妇鏁撻惃鍕�繆閹�拷妫ゅ▔鏇＄箻鐞涘本褰冮崗銉�磼閿涳拷);
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
		printf("娑擄拷鍙￠張锟絛娴ｅ秴锟介悽锟�count);
		Sleep(3000);
		system("cls");
		pageshow_();
		mainmeau();
	}
	int pageshow()
	{	
		int i;
		char *p="濞嗐垼绻嬮惂璇茬秿鐎涳妇鏁撴穱鈩冧紖缁狅紕鎮婄化鑽ょ埠閿涗緤绱掗敍锟�
		gotoxy(30,10);
	
		for(i=0;*(p+i)!='\0';i++)
		{
			printf("%c",*(p+i));
			Sleep(50);
		}
			Sleep(5000);
			system("cls");
			gotoxy(30,1);
			printf("濮濓絽婀�幖锟界紦閻ｅ矂娼伴悳锟斤拷鐠囬�鈼㈤崐娆欑磼閿涳拷);
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
			printf("    瀹稿弶鎯屽�鍝勭暚閹存劧绱掗敍锟�            ");
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
	printf("瀹告煡锟介崙绡璶");
	gotoxy(0,24);
	system("pause");
	
}
	int mainmeau()
	{
	
		printf("鐠囩兘锟介幏鈺冩祲鎼存梻娈戦崝鐔诲厴閿涳拷);
		fflush(stdin);
scanf_ :scanf("%c",&CH);
switch(CH)
{
	case '0':exitsystem();fflush(stdin);break;
	case '1':printfall();scan();fflush(stdin);break;
	case '2':search();fflush(stdin);break;
	case '3':del();fflush(stdin);break;
	case '4':change();;break;
	case '5':insert();fflush(stdin);break;
	case '6':order();fflush(stdin);break;
	case '7':count();fflush(stdin);break;
	case '8':printfall();fflush(stdin);
			Sleep(5000);
			system("cls");
			pageshow_();
			mainmeau();break;
	default:printf("鏉堟挸鍙嗛柨娆掞拷 鐠囩兘鍣搁弬鎷岀翻閸忋儻绱�);
			fflush(stdin);
			goto scanf_;
			break;
		
	
	}

	}
	void logon()
	{
		int times=0;
		char key;
		char username[20];
		char password[20];
		do
		{
		gotoxy(30,10);
		printf("鐠囩柉绶�崗銉ф暏閹村嘲鎮曢敍锟�;
		scanf("%s",username);
		gotoxy(30,11);
		printf("鐠囩柉绶�崗銉ョ槕閻�緤绱�);
		scanf("%s",password);
		if((strcmp(username,"鎼村嘲濯�)==0)&&(strcmp(password,"123456")==0))
		{gotoxy(30,12);
			printf("閻ц�缍嶉幋鎰��閿涳拷);
			Sleep(3000);
			system("cls");
			system("color f4");
			pageshow();
			
			mainmeau();
		}
		else
		{gotoxy(30,12);
			printf("閻ц�缍嶆径杈�Е");
			Sleep(1000);
			system("cls");
			times=times+1;

		}
		}while(times<3);
		gotoxy(20,11);
		printf("娑撳�锟介悽銊﹀煕閸氬秵鍨ㄧ�鍡欑垳闁挎瑨锟�閺冪姵纭堕惂璇茬秿閿涘矁锟介柌宥呮儙缁嬪�绨�敍渚婄磼\n");
			gotoxy(0,24);
			system("pause");

	}
void main()
{


	logon();

}





