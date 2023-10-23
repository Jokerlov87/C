#include<stdio.h>
int main()
{
	int iArray[3];
	int index;
	printf("请分别输入语文，数学和英语成绩：");
	
	for(index=0;index<3;index++)
	{
		scanf("%d",&iArray[index]);
	}
	
	printf("语文，数学和英语的成绩分别是；");
	for(index=0;index<3;index++)
	{
		printf("%d\t",iArray[index]);
	}
	return 0;
}
