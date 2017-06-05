/*1、	完成操作：顺序表的创建、销毁、判断表空、
测量表长、插入、删除、查询元素、清空顺序表、
取顺序表中指定位置上的元素、输出顺序表。
2、	设计菜单界面显示所有操作。*/
#include "stdio.h"
#include"stdlib.h"
#define LIST_INIT_SIZE 100
#define LISTINCREMENT  10
#define OK             1
#define OVERFLOW  	  -1
typedef struct 
{
	int *elem;
	int length;
	int listsize;
	int date[LIST_INIT_SIZE];
}SqList;
	SqList L;
int InitList_Sq()//顺序表的初始化
{
	
	L.elem=(int  *)malloc(LIST_INIT_SIZE*sizeof(int));
	if(!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	
	return OK;
}
void CreatList_Sq()//顺序表的数据输入
{
	int number_date,i;
	printf("the number of the date:");
	scanf("%d",&number_date);
	for(i=L.length;i<number_list;i++)
	{
		scanf("%d",&L.date[i]);
		L.length++;
	}
}
void DestroyList()
{
	if(L.elem)
		free(L.elem);
}
void JudgeList()
{
	if(L.length==0)
		printf("SqList NULL!!");
	else
		printf("SqList  not NULL");
}
void MeterList()//测量表长
{
	int length;
	length=L.length;
	printf("length of List is %d",length);
}
void InsertList()
{
	int location;
	printf("please input insert location:");
	scanf("%d",&location);

}
int main()
{


InitList_Sq();

	return 0;
}
