/*1、	完成操作：顺序表的创建、销毁、判断表空、
测量表长、插入、删除、查询元素、清空顺序表、
取顺序表中指定位置上的元素、输出顺序表。
2、	设计菜单界面显示所有操作。*/
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

int InitList(){//顺序表的初始化

	L.elem=(int  *)malloc(LIST_INIT_SIZE*sizeof(int));
	if(!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;

	return OK;
}

void CreatList(){//顺序表的数据输入
	int number_date,i;
	printf("the number of the date:");
	fflush(stdin);
	scanf("%d",&number_date);
	for(i = L.length; i < number_date; i++)
	{
		scanf("%d",L.elem+i);
		L.length++;
	}

	back();
}

void DestroyList(){//销毁顺序表
	if(L.elem)
		free(L.elem);
		printf("the Sqlist has been Destroy!");
		back();
}

void JudgeList(){//判断表空
	if(L.length == 0)
		printf("SqList NULL!!");
	else
		printf("SqList  not NULL");
		back();
}

void MeterList(){//测量表长
	int length;
	length = L.length;
	printf("length of List is %d",length);
    back();
}

void InsertList(){//插入元素
	int location,i,number;
	fflush(stdin);
	printf("please input insert location:");
	scanf("%d",&location);
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

void DeleteList(){//删除元素
    int i;
    int delete_location;
    fflush(stdin);
    printf("please input delete location:");
    scanf("%d",&delete_location);
    for(i = delete_location; i < L.length; i++)
        *(L.elem+i-1) = *(L.elem+i);
        L.length--;
    printf("delete succeed!");
    back();

}

void SearchList(){//查询元素
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

void ClearList(){//清空顺序表
    L.length = 0;
    printf("clear succeed!");
    back();
}

void GetElem(){//取顺序表上的指定元素
    int Elem_location;
    printf("please inout elem location:");
    fflush(stdin);
    scanf("%d",&Elem_location);
    printf("the elem is %d\n",*(L.elem+Elem_location-1));
    back();

}

void PutoutList(){//输出顺序表
    int i;
    for(i=0;i<L.length;i++)
        printf("%d ",*(L.elem+i));
    back();
}

void pageshow_(){//界面显示
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

void mainmeau(){//主菜单
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
void back(){
    Sleep(3000);
    system("cls");
 pageshow_();
 mainmeau();
 }
int main()
{
    InitList();
    pageshow_();
    mainmeau();

	return 0;
}
