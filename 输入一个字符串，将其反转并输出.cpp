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
	printf("输出源字符串：%s\n",String);
	printf("反过来输出字符串：%s\n",Reverse);
	return 0;
}
