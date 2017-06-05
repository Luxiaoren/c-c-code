#include"stdio.h"
static int x=5;
int main()
{
	auto int x=10;
	f1();
	f2();
	printf("A.%d\n",x);

}
	f1()
	{
		x+=20;
		printf("B.%d\n",x);
	}
	f2()
	{
		x+=10;
		printf("C,%d\n",x);
	}