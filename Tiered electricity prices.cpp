#include<stdio.h>
int main()
{
    double x;
    double cost;
    scanf("%lf",&x);
    if(x<=50&&x>0)
    {
        cost=0.53*x;
        printf("cost = %.2lf",cost);
    }
    else if(x>50)
    {
        cost=50*0.53+(0.53+0.05)*(x-50);
        printf("cost = %.2lf",cost);
    }
    else
    {
        printf("Invalid Value!");
    }
    return 0;
}
