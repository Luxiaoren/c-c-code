//采用递归而非递归的方式求m的n次方的结果
/*#include"stdio.h"
int main()										//非递归方式
{
	int power(int m, int n);
	int m , n , sum;
	printf("请输入您想求的m，n：");
	scanf("%d %d",&m,&n);
	sum=power(m,n);
	printf("%d\n",sum);
	return 0;
}
	power(int m, int n)
	{
		int i, sum=1;
		for(i=1;i<=n;i++)
			sum*=m;
		return sum;
	}*/
//递归方式
#include"stdio.h"
int main()										//递归方式
{
	int power(int m, int n);
	int m , n , sum;
	printf("请输入您想求的m，n：");
	scanf("%d %d",&m,&n);
	sum=power(m,n);
	printf("%d\n",sum);
	return 0;
}
	int power(int m, int n)
	{
		
		if(n==0)
			return 1;
		else
			return m*power(m,n-1); 
	}