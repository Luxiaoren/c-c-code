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
#define OVERFLOW  	  -1
typedef struct{
	int *elem;
	int length;
	int listsize;
	int date[LIST_INIT_SIZE];
}SqList;
SqList L;
	void gotoxy(int x,int y){
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
	int number_date,i;
	printf("the number of the date:");
	scanf("%d",&number_date);
	for(i = L.length; i < number_date; i++)
	{
		scanf("%d",L.elem+i);
		L.length++;
	}
}

void DestroyList(){//����˳���
	if(L.elem)
		free(L.elem);
}

void JudgeList(){//�жϱ��
	if(L.length == 0)
		printf("SqList NULL!!");
	else
		printf("SqList  not NULL");
}

void MeterList(){//������
	int length;
	length = L.length;
	printf("length of List is %d",length);
}

void InsertList(){//����Ԫ��
	int location,i,number;
	printf("please input insert location:");
	scanf("%d",&location);
	printf("please input insert number:");
	scanf("%d",&number);
	for(i = L.length-1; i > location-1; i--)
    {
        *(L.elem+i+1) = *(L.elem+i);
    }
    *(L.elem+i) = number;
    L.length++;
}

void DeleteList(){//ɾ��Ԫ��
    int i;
    int delete_location;
    printf("please input delete location:");
    scanf("%d",&delete_location);
    for(i = delete_location; i < L.length; i++)
        *(L.elem+i-1) = *(L.elem+i);
        *(L.elem+i) = '\0';

}

void SearchList(){//��ѯԪ��
    int i;
    int search_number;
    int result;
    int flag=0;
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
    }

void ClearList(){//���˳���
    L.length = 0;
}

void GetElem(){//ȡ˳����ϵ�ָ��Ԫ��
    int Elem_location;
    printf("please inout elem location:");
    scanf("%d",&Elem_location);
    printf("the elem is %d\n",*(L.elem+Elem_location-1));

}

void PutoutList(){//���˳���
    int i;
    for(i=0;i<L.length;i++)
        printf("%d ",*(L.elem+i));
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
		printf("8. ���˳���");
		gotoxy(30,13);
	}

void mainmeau(){//���˵�
    int choice;
    printf("please choice:");
    fflush(stdin);
    scanf("%d",&choice);
    switch(choice){
        case 0:CreatList();break;
        case 1:DestroyList();break;
        case 2:JudgeList();break;
        case 3:MeterList();break;
        case 4:InsertList();break;
        case 5:DeleteList();break;
        case 6:SearchList();break;
        case 7:ClearList();break;
        case 8:GetElem();break;
        case 9:PutoutList();break;
        default :printf("input error!!");
    }


}

int main()
{
    //InitList();
    pageshow_();
    mainmeau();

	return 0;
}
