#include<stdio.h> 
float getTemperature()
{
	float temperature;
	printf("please input a temperature:\n");
	scanf("%f",&temperature);
	printf("��ǰ������:%.1f\n",temperature);
	return temperature;
}

void judgeTemperature(float temperature)
{
	if(temperature<=37.3&&temperature>=36)
		printf("��������\n");
	else
		printf("���²�����\n");
}


int main()
{
	judgeTemperature(getTemperature());
	return 0;
}


