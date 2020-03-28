#include "stdio.h"

int speed(int a[],int n)
{
    int t=0,x;
    t=a[0]*6+5;
    for(int i=1;i<n;i++)
    {
        x=a[i]-a[i-1];
        if(x==0)
            t+=5;
        else if(x>0)
            t=t+(6*x+5);
        else if(x<0)
            t=t+(4*(-x)+5);
    }
    return t;

}

int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);

    t=speed(a,n);
    printf("%d",t);
    return 0;
}
