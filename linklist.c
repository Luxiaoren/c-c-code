//单链表的就地逆序
#include"stdio.h"
#define EOF -1
typedef struct date{
	int date;
	struct date *next;
}Date;
Date *head=NULL,*p2;
	void Creat()
		{
			int c;
			Date *p1;
			do{
				p1=(Date*)malloc(sizeof(Date));
				scanf("%d",&p1->date);
				p2=head;
				p1->next=p2;
				head=p1;
			}while(p1->date!=EOF);
			head=head->next;
		}
	void Print()
	{
		Date *ptr=head;
		while(ptr)
		{
			printf("%d\n",ptr->date);
			ptr=ptr->next;
		}
	}
	void Deal()
	{
		int i;
		int count=0;
		Date *ptr=head,*pt=head;
		while(ptr)
		{
			count++;
			ptr=ptr->next;
		}
		p2->next=head;
		for(i=0;i<count-1;i++)
				head=head->next;
			head->next=NULL;
	//	for(i=0;i<count;i++)
	//	{
	//		pt=head;
	//		pt->next=NULL;
	//		p2->next=pt;
	//		p2=pt;
	//		head=head->next;
	//	}
	//		p2->next=NULL;
			printf("%d",p2->next->date);
			
		
	}
void  main()
{
	Creat();
	Print();
	Deal();

}