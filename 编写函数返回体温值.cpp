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
	printf("��ǰ�������ǣ�%.1f\n",temperature);
	return temperature;
}
