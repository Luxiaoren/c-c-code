#include"stdio.h"
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
int main()
{
	int num,n ;
	int again=1;
	printf("如果输入的数小于50，程序就会停止\n");
	while(again)
	{
		printf("输入数据：");
		scanf("%d",&num);
		printf("这个数的平方是 %d \n",SQ(num));
		if (n>=50)
			again	=TRUE;
		else
			again   =FALSE;
	}
	
}