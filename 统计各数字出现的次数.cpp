#include<stdio.h>
int main()
{
	int i,a[10]={1,5,6,8,3,2,4,5,2,5},b[10]={0};
	for(i=0;i<10;i++)
	b[a[i]]++;
	for(i=0;i<10;i++)
	printf("%d出现的次数%d\n",i,b[i]);
	
	return 0;
	
}
