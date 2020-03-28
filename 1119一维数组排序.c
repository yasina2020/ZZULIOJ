#include "stdio.h"
void sort(int a[],int n)
{
    int min,t,idx=0;
    for(int j=0;j<n;j++)
    {
        min=a[j];
        for(int i=j;i<n;i++)
       {
         if(a[i]<min)
          {
            min=a[i];
            idx=i;
          }
       }
        t=a[j];
        a[j]=a[idx];
        a[idx]=t;
    }
}

void PrintArr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
    if(i==n-1)
        printf("%d",a[i]);
    else
        printf("%d ",a[i]);
    }

}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    PrintArr(a,n);
    return 0;
}
