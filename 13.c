//-1. 编程，输出200以内所有完全平方数C（满足C2 =A2 +B2 ）及其个数。
#include"stdio.h"
int main()
{
	int a,b,c,n=0;
	for(c=1;c<=200;c++)
	for(a=1;a<=200;a++)
		for(b=1;b<=200;b++)
					if(c*c==(b*b+a*a))
					{
						printf("%d ",c);	
					 a=201;b=201;
						n++;
					}
					printf("\n");
					printf("%d\n",n);
					
				
			
		
}
/*int a,b,c,n=0;
	  for(c=1;c<=200;c++) 
		  for(a=1;a<=200;a++)  
			  for(b=1;b<=200;b++) 
				  if(c*c==a*a+b*b)
				  {
					  printf("%4d",c);
					  a=201;b=201;
					  n++;
				  }
				  printf("\nn=%d\n",n)*/