#include"stdio.h"
#define exchange(a,b) {\
 int t;\
 t=a;\
a=b;\
b=t;\
}
int main()
{
	int x=10;
	int y=20;
	printf("x=%d\ty=%d\n",x,y);
	exchange(x,y);
	printf("x=%d\ty=%d",x,y);
}