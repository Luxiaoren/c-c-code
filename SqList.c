/*1��	��ɲ�����˳���Ĵ��������١��жϱ�ա�
�����������롢ɾ������ѯԪ�ء����˳���
ȡ˳�����ָ��λ���ϵ�Ԫ�ء����˳���
2��	��Ʋ˵�������ʾ���в�����*/
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
int InitList_Sq()//˳���ĳ�ʼ��
{
	
	L.elem=(int  *)malloc(LIST_INIT_SIZE*sizeof(int));
	if(!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	
	return OK;
}
void CreatList_Sq()//˳������������
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
void MeterList()//������
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
