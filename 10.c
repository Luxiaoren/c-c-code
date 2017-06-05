
/*已知英制长度的英尺foot和英寸inch的值，那么对应的米
是(foot+inch/12)*0.3048。现在，如果用户输入的是厘米数，那么对应英制长度的英尺和英寸是多少呢？别忘了1英尺等于12英寸。*/
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

