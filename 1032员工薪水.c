#include "stdio.h"

int main()
{
    int n;
    float sum;
    scanf("%d",&n);
    if(n<=10000)
        sum=1500+n*0.05;
    if(n>10000&&n<=50000)
        sum=2000+(n-10000)*0.03;
    if(n>50000)
        sum=3200+(n-50000)*0.02;
    printf("%.2f",sum);
    return 0;

}
