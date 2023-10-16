#include<stdio.h>
int main()
{
	int merchant1;
	printf("米线店套餐如下：1考神套餐 2单人套餐 3情侣套餐\n");
	printf("%d\n",merchant1);
	
	if(merchant1=1)
	{
		int iNumber2;
		printf("考神套餐13元\n");
		printf("%d\n",iNumber2);
		
		if(iNumber2=2)
		{
			int iNumber3;
			printf("单人套餐13元\n");
			printf("%d\n",iNumber3);
			
			if(iNumber3=3)
			{
				int iNumber3;
				printf("情侣套餐13元\n");
			}
		}
	}
	
	return 0;
}
