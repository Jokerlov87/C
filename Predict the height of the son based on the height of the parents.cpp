#include<stdio.h>
#define HEG 0.54
float height(float mother,float father);

int main()
{
	float father;
	float mother;
	float son;
	
	printf("�����븸�׵����:\n");
	scanf("%f",&father);
	
	printf("������ĸ�׵����:\n");
	scanf("%f",&mother);

	son=height(father,mother);
	printf("Ԥ����ӵ����:");
	printf("%.2f",son);
	
	return 0;	
}
float height(float father,float mother)
{
	float son=(mother+father)*HEG;
	return son;
}
