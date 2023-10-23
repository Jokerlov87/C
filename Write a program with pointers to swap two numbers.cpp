#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int x=1,y=9;
	swap(&x,&y);
	printf("交换数据是：x=%d,y=%d\n",x,y);
	return 0;
}
