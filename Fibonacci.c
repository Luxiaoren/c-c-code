#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int A[30];
	memset(A, 0, 100 * sizeof(int));
	int a = 1, i = 2, n, b, j = 0;
	A[0] = a;
	scanf_s("%d", &n);
	for (i = 2;i <= n;i++)
	{
		for (j = 0;j<30;j++)
		{
			A[j] = A[j] * i;
		}
		for (j = 0;j<30;j++)
		{
			if (A[j] >= 10)
			{
				A[j + 1] = A[j + 1] + A[j] / 10;
				A[j] = A[j] % 10;
			}
		}
	}
	for (b = 30;b >= 0;b--)
	{
		if (A[b] != 0)
			break;
	}
	for (i = 30;i >= 0;i--)
	{
		printf_s("%d", A[i]);
	}
	printf_s("#");
	return 0;
}