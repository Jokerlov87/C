#include<stdio.h>
int main()
{
    int N;
    int g;
    int s;
    int b;
    scanf("%d",&N);
    g=N%10;
    s=(N%100)/10;
    b=N/100;
    if(100<=N&&N<=999&&g*g*g+s*s*s+b*b*b==N)
    {
        printf("Yes");
    }
    else if(100<=N&&N<=999&&g*g*g+s*s*s+b*b*b!=N)
    {
        printf("No");
    }
    else
    {
        printf("Invalid Value.");
    }
    return 0;
}
