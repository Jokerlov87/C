#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30],str2[30];
	printf("ԭ������:\n");
	gets(str1);
	printf("������������:\n");
	gets(str2);
	printf("ԭ������:\n");
	puts(str1);
	printf("������������:\n");
	puts(str2);
	strcpy(str1,str2);
	printf("������������ɹ����µ��������£�\n");
	puts(str1);
	
	return 0;
}
