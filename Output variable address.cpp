#include<stdio.h>
int main()
{
	int a;
	int *ipointer1;
	printf("���������ݣ�\n");
	scanf("%d",&a);
	ipointer1=&a;
	printf("ת��ʮ������Ϊ:%x\n",*ipointer1);
	
	return 0;
}
