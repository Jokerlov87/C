#include<stdio.h>

int main()
{
	int i;
	char String[5]="live";
	char Reverse[5]={0};
	int size;
	size=sizeof(String);
	for(i=0;i<4;i++)
	{
		Reverse[size-i-2]=String[i];
	}
	printf("���Դ�ַ�����%s\n",String);
	printf("����������ַ�����%s\n",Reverse);
	return 0;
}
