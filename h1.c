/*1��	��ɲ�����˳���Ĵ��������١��жϱ�ա�
�����������롢ɾ������ѯԪ�ء����˳���
ȡ˳�����ָ��λ���ϵ�Ԫ�ء����˳���
2��	��Ʋ˵�������ʾ���в�����*/
#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#include"windows.h"
#define LIST_INIT_SIZE 100
#define LISTINCREMENT  10
#define OK             1
#define OVERFLOW  	  -2
#define ERROR         -1
typedef struct{
	int *elem; //����ռ�Ļ���ַ
	int length;//ʵ�ʴ��泤�� 
	int listsize;
}SqList;
SqList L;//����˳���L
void back();
	void gotoxy(int x,int y){//��λ��꺯��
		COORD pos={x,y};
			HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleCursorPosition(hOut,pos);
	}

int InitList(){//˳���ĳ�ʼ��

	L.elem=(int  *)malloc(LIST_INIT_SIZE*sizeof(int));
	if(!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;

	return OK;
}

void CreatList(){//˳������������
	int number_date;//�������ݵĸ���
	int	i;
	printf("the number of the date:");
	fflush(stdin);
	scanf("%d",&number_date);
	for(i = L.length; i < number_date; i++)
	{
		scanf("%d",L.elem+i);
		L.length++;
	}
	printf("input complete!");
	back();//�������������½��в��� ��ͬ
}

void DestroyList(){//����˳���
	if(L.elem)
		free(L.elem);//�ͷ��ڴ�ռ�
		printf("the Sqlist has been Destroy!");
		back();
}

void JudgeList(){//�жϱ��
	if(L.length == 0)
		printf("SqList NULL!!");
	else
		printf("SqList  not NULL");
		back();
}

void MeterList(){//������
	int length;	
	if(L.elem==NULL)
		printf("the sqlist is NULL!");

	length = L.length;
	printf("length of List is %d",length);
    back();
}

void InsertList(){//����Ԫ��
	int location,i,number;

insertlocation:	fflush(stdin);
				printf("please input insert location:");
				scanf("%d",&location);
				if(location>L.length||location<0)//�жϲ���λ���Ƿ�Ϸ�
				{
					printf("location error!\n");
					goto insertlocation;
				}
				printf("please input insert number:");
				scanf("%d",&number);

				for(i = L.length; i >= location; i--)
				{
					*(L.elem+i) = *(L.elem+i-1);
				}
				*(L.elem+i) = number;
				L.length++;
				printf("insert succeed!");
				back();
}

void DeleteList(){//ɾ��Ԫ��
					int i;
					int delete_location;
deletelocation:	    fflush(stdin);
					printf("please input delete location:");
					scanf("%d",&delete_location);
					if(delete_location>=L.length||delete_location<0)//�ж�ɾ��λ���Ƿ�Ϸ�
					{
						printf("location error!");
						goto deletelocation;

					}
					for(i = delete_location; i < L.length; i++)
						*(L.elem+i-1) = *(L.elem+i);
						L.length--;
					printf("delete succeed!");
					back();

}

void SearchList(){//��ѯԪ��
    int i;
    int search_number;
    int result;
    int flag=0;
    fflush(stdin);
    printf("please input search number:");
    scanf("%d",&search_number);
    for(i=0;i<L.length;i++)
        if(*(L.elem+i) == search_number)
        {
            printf("%d:the location is %d\n",search_number,i+1);
            flag=1;
            continue;
        }
        if(flag)
            printf("ELEM FOUND\n");
        else
            printf("NO FOUND\n");
    back();
    }

void ClearList(){//���˳���
    L.length = 0;
    printf("clear succeed!");
    back();
}

void GetElem(){//ȡ˳����ϵ�ָ��Ԫ��
				int Elem_location;
				printf("please inout elem location:");
Elemlocation:	fflush(stdin);
				scanf("%d",&Elem_location);
				if(Elem_location>=L.length||Elem_location<0)
				{
					printf("location error!\n");
					goto Elemlocation;
				}
				printf("the elem is %d\n",*(L.elem+Elem_location-1));
				back();

}

void PutoutList(){//���˳���
    int i;
	if(L.length==0)
	{
		printf("sqlist NULL");
		back();
	}
    for(i=0;i<L.length;i++)
        printf("%d ",*(L.elem+i));
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

void mainmeau(){//���˵�
   char  choice;
    printf("please choice:");
	fflush(stdin);
   	choice=_getch();

    switch(choice){
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
void back(){
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
