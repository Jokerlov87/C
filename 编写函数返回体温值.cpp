#include<stdio.h>
int getTemperature();
int main()
{
	getTemperature();
	return 0;
}

int getTemperature()
{
	float temperature;	
	printf("please intput a temperature:\n");
	scanf("%f",&temperature);
	printf("当前的体温是：%.1f\n",temperature);
	return temperature;
}
