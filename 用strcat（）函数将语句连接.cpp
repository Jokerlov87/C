#include<stdio.h>
#include<string.h>
int main()
{
		char str1[30],str2[30];
	printf("����ǰһ��:\n");
	gets(str1);
	printf("�����һ��:\n");
	gets(str2);
	strcat(str1,str2);
	printf("����Ϊ:\n");
	puts(str1);
	return 0; 
}
