#include<stdio.h>
#include<string.h>
int main()
{
		char str1[30],str2[30];
	printf("输入前一句:\n");
	gets(str1);
	printf("输入后一句:\n");
	gets(str2);
	strcat(str1,str2);
	printf("整句为:\n");
	puts(str1);
	return 0; 
}
