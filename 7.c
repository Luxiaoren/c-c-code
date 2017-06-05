//6、已知二阶Fibonacci 数列：
//0 若n=0
//Fib(n)= 1 若n=1
//Fib(n-1)+Fib(n-2) 其他情况
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