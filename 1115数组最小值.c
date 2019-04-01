#include<stdio.h>
#define N 1000
int main()
{
    int n;
    int a[N];
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min;
    min=a[0];
    int s;
    s=0;
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            s=i;
        }
    }
    printf("%d %d",min,s);
    return 0;
}
