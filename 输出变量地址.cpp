#include<stdio.h>
int main()
{
	int a;
	int *ipointer1;
	printf("请输入数据：\n");
	scanf("%d",&a);
	ipointer1=&a;
	printf("转换十六进制为:%x\n",*ipointer1);
	
	return 0;
}
