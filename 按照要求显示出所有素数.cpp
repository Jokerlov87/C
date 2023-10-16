#include<stdio.h>
int fun(int lim,int aa[])
{
	int i,j=0,k=0;
	for(i=2;i<lim;i++)
	{
		for(j=2;j<i;j++)
		{
		
			if(i%j==0)
			break;
		}	
			if(j==i)
				aa[k++]=i;
	}
	return k;
}
int main()
{
	int aa[100],i;
	fun(100,aa);
	printf("100以内的素数有:\n");
	for(i=0;i<25;i++)
	{
		printf("%d\t",aa[i]);
	}
	printf("\n");
	return 0;
}
