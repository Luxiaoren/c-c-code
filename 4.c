
/*编写程序实现如下功能：方程y=3x^2+2x+1，从键盘输入x 的值，输出y 的值。*/
#include"stdio.h"
int main()
{
	int x;
	printf("请输入x的值：");
	scanf("%d",&x);
	printf("%d\n",3*x*x+2*x+1);
	return 0;

}