#include<stdio.h>
int main()
{
	int a[4][2];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("输出二维数组：\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
