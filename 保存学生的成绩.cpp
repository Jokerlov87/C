#include<stdio.h>
int main()
{
	int iArray[3];
	int index;
	printf("��ֱ��������ģ���ѧ��Ӣ��ɼ���");
	
	for(index=0;index<3;index++)
	{
		scanf("%d",&iArray[index]);
	}
	
	printf("���ģ���ѧ��Ӣ��ĳɼ��ֱ��ǣ�");
	for(index=0;index<3;index++)
	{
		printf("%d\t",iArray[index]);
	}
	return 0;
}
