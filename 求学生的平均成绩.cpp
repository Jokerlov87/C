#include<stdio.h>
void main()
{
	int garade[]={95,85,45,78,68,91,90,55,48,80};
	int total=0;
	int i;
	int avg;
	for(i=0;i<10;i++)
	{
		total+=garade[i];
	}
	avg=((float)total/10);
	printf("the student's average score is %f\n",avg);
}
