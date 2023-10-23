#include<stdio.h>
int main()
{
int a=8;
int b=9;
int c=10;
a=a/3;
b=(a+b)/3;
c=(a+b+c)/3;
a=a+b+c;
b=b+c;
printf("%d %d %d",a,b,c);
return 0;
}
