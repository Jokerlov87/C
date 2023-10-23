#include<stdio.h>
int main()
{
    double x;
    double result;
    scanf("%lf",&x);
    if(x!=0)
    {
        result=1/x;
    }
    else
    {
        result=0;
    }
    printf("f(%.1lf) = %.1lf",x,result);
    return 0;
}
