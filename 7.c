//6����֪����Fibonacci ���У�
//0 ��n=0
//Fib(n)= 1 ��n=1
//Fib(n-1)+Fib(n-2) �������
#include"stdio.h"
int main()
{
	long fib(int n);
	int n;
	printf("please input n;");
	scanf("%d",&n);
	printf("%d",fib(n));
	
	return 0;
}	
	int fib(int n)
	{
	
	
	 if( n==1 || n==2)
			return  1;
		else
			if(n >= 3)
			return fib(n-1) + fib(n-2);
	 
		
	}