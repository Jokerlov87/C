#include<stdio.h>
int main()
{
	char c1;
	char c2;
	char c3;
	char c4;
	char c5;
	
	c1=getchar();
	c2=getchar();
	c3=getchar();
	c4=getchar();
	c5=getchar();
	
	printf("%c",122-c5);
	
	if(c1>='a'&&c1<='z')
	{
		c1+=4;
		if(c1>'z')
		{
			c1-=26;
		}
	}
	else if(c1>='A'&&c1<='Z')
	{
		c1+=4;
		if(c1>'Z')
		{
			c1-=26;
		}
	}

	
	
	if(c2>='a'&&c2<='z')
	{
		c2+=4;
		if(c2>'z')
		{
			c2-=26;
		}
	}
	else if(c2>='A'&&c2<='Z')
	{
		c2+=4;
		if(c2>'Z')
		{
			c2-=26;
		}
	}
	
	if(c3>='a'&&c3<='z')
	{
		c3+=4;
		if(c3>'z')
		{
			c3-=26;
		}
	}
	else if(c3>='A'&&c3<='Z')
	{
		c3+=4;
		if(c3>'Z')
		{
			c3-=26;
		}
	}
	
	if(c4>='a'&&c4<='z')
	{
		c4+=4;
		if(c4>'z')
		{
			c4-=26;
		}
	}
	else if(c4>='A'&&c4<='Z')
	{
		c4+=4;
		if(c4>'Z')
		{
			c4-=26;
		}
	}
	
	if(c5>='a'&&c5<='z')
	{
		c5+=4;
		if(c5>'z')
		{
			c5-=26;
		}
	}
	else if(c5>='A'&&c5<='Z')
	{
		c5+=4;
		if(c5>'Z')
		{
			c5-=26;
		}
	}
	
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	
	printf("\n%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	
	return 0;
}
