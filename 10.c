
/*��֪Ӣ�Ƴ��ȵ�Ӣ��foot��Ӣ��inch��ֵ����ô��Ӧ����
��(foot+inch/12)*0.3048�����ڣ�����û������������������ô��ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ���Ƕ����أ�������1Ӣ�ߵ���12Ӣ�硣*/
#include"stdio.h"
int main()
{
	float cm,inch;
	printf("please input the cm:");
	scanf("%f",&cm);
	inch=cm/(100*30.48*145/12);
	printf("%f\n",inch);
	printf("%f\n",inch/12);
	return 0;

}

