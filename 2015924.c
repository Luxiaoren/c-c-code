//在有序对中插入一个数，使新序对仍然有序
#define  SIZE  10
#include"stdio.h"
int main()
{
	int string[SIZE]={23,34,45,56,67,78,89,90,99};
	int InsertNumber;
	int i,j;
	for(i=0;i<SIZE-1;i++)
		printf("%d ",string[i]);
	printf("Please input the insert number:");
	scanf("%d",&InsertNumber);
	if(InsertNumber<=string[0])
	{
		for(i=SIZE-1;i>0;i--)
			string[i]=string[i-1];
		string[i]=InsertNumber;

	}
	else
		if(InsertNumber>=string[8])
			string[SIZE-1]=InsertNumber;
		else
		{
			for(i=0;i<=SIZE-3;i++)
				if(InsertNumber>=string[i]&&InsertNumber<=string[i+1])
				{
					for(j=SIZE-1;j>i;j--)
						string[j]=string[j-1];
					string[i+1]=InsertNumber;
					break;
				}
		}
			for(i=0;i<SIZE;i++)
		printf("%d ",string[i]);
}
