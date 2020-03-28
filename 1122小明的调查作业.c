#include "stdio.h"

int main()
{
    struct A{
    int x;
    int f;
    };
    int n,t,cnt=0;
    scanf("%d",&n);
    struct A a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i].x);
        a[i].f=0;//不重复
    }
    //查重
    for(int j=0;j<n;j++)
    {
        t=a[j].x;
        for(int i=j+1;i<n;i++)
            if(t=a[i].x)
            {
                a[i].f=1;
                cnt++;
            }
    }
    //排序小---大
    int min,idx=0;
    for(int j=0;j<n;j++)
    {
        min=a[j].x;
        for(int i=j;i<n;i++)
       {
         if(a[i].x<min)
          {
            min=a[i].x;
            idx=i;
          }
       }
        t=a[j];
        a[j]=a[idx];
        a[idx]=t;
    }

    printf("%d\n",cnt);
    for(int i=0;i<n;i++)
    {
        if(a[i].f==0)
            printf("%d ",a[i].x);
    }

    return 0;
}
