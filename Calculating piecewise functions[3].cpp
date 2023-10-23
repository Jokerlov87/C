#include<stdio.h>
int main()
{
    double x;
    double result;
    scanf("%lf",&x);
    if(x==10)
    {
        result=1/x;
    }
    else
    {
        result=x;
    }
    printf("f(%.1lf) = %.1lf",x,result);
    return 0;
}
