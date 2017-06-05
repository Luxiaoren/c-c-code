//、编写程序回答如下问题：如果一个球从100 米高度自由落下，每次落地后反
//跳回原高度的一半；再落下，求它在第10 次落地时，共经过多少米？第10 次反
//弹多高？
#include"stdio.h"

int main()
{
	double i, s=100,sum=0;
	for(i=1;i<=10;i++)
	{
		s=s/2;
		sum+=s;
		
	}
		printf("%f \n%f\n",s,sum);
		return 0;
}