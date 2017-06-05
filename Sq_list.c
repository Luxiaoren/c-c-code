/*1、	完成操作：顺序表的创建、销毁、判断表空、
测量表长、插入、删除、查询元素、清空顺序表、
取顺序表中指定位置上的元素、输出顺序表。
2、	设计菜单界面显示所有操作。*/
#include "stdio.h"
#define LIST_INIT_SIZE 100
#define LISTINCREMENT  10
#define OK             1
#define OVERFLOW  	  -1
typedef struct 
{
	int *elem;
	int length;
	int listsize;
}SqList;

int InitList_Sq(SqList &,L){
	
	L.elem=(int  *)malloc(LIST_INIT_SIZE*sizeof(int));
	if(!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return OK;
}
int main(int argc, char const *argv[])
{
	int relust;
	relust=InitList_Sq();
	printf("%d\n",relust);
	return 0;
}
