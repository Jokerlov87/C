#include<stdio.h>
char _change(char c)
{
	if(c>='a'&&c<='z')
	{
		c+=4;
		if(c>'z')
		{
			c-=26;
		}
	}
	else if(c>='A'&&c<='Z')
	{
		c+=4;
		if(c>'Z')
		{
			c-=26;
		}
	}
	return c;
}

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
	
	c1=_change(c1);
	c2=_change(c2);
	c3=_change(c3);
	c4=_change(c4);
	c5=_change(c5);
	
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	
	printf("\n%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	
	return 0;
}
