//���õݹ���ǵݹ�ķ�ʽ��m��n�η��Ľ��
/*#include"stdio.h"
int main()										//�ǵݹ鷽ʽ
{
	int power(int m, int n);
	int m , n , sum;
	printf("�������������m��n��");
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
//�ݹ鷽ʽ
#include"stdio.h"
int main()										//�ݹ鷽ʽ
{
	int power(int m, int n);
	int m , n , sum;
	printf("�������������m��n��");
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