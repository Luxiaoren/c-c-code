#include"stdio.h"
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
int main()
{
	int num,n ;
	int again=1;
	printf("����������С��50������ͻ�ֹͣ\n");
	while(again)
	{
		printf("�������ݣ�");
		scanf("%d",&num);
		printf("�������ƽ���� %d \n",SQ(num));
		if (n>=50)
			again	=TRUE;
		else
			again   =FALSE;
	}
	
}