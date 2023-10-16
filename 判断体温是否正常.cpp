#include<stdio.h> 
float getTemperature()
{
	float temperature;
	printf("please input a temperature:\n");
	scanf("%f",&temperature);
	printf("当前体温是:%.1f\n",temperature);
	return temperature;
}

void judgeTemperature(float temperature)
{
	if(temperature<=37.3&&temperature>=36)
		printf("体温正常\n");
	else
		printf("体温不正常\n");
}


int main()
{
	judgeTemperature(getTemperature());
	return 0;
}


