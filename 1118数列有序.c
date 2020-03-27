//#include "stdio.h"
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int A[n+1];
//    for(int i=0;i<n;i++)
//        scanf("%d",&A[i]);
//
//    int x,idx;
//    scanf("%d",&x);
//    for(int i=0;i<n;i++)
//    {
//        if(x>=A[i]&&x<=A[i+1])
//        {
//            idx=i+1;
//            break;
//        }
//    }
//    int k;
//    n=n+1;
//    k=n;
//    for(n;n>idx;n--)
//        A[n]=A[n-1];
//    A[idx]=x;
//    for(int i=0;i<k;i++)
//    {
//        if(i==k-1)
//            printf("%d",A[i]);
//        else
//            printf("%d ",A[i]);
//    }
//
//
//    return 0;
//}

#include<stdio.h>
int insert(int a[],int n,int num)
{
    int i,t,k;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>num)
        a[i+1]=a[i];
        else
        break;
    }
    a[i+1]=num;
    n++;
    return n;
}
void PrintArr(int a[],int n) /*输出数组a的前n个元素*/
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i==0)
        printf("%d",a[i]);
        else
        printf(" %d",a[i]);
    }
}
int main()
{
    int n,a[1001],num,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    insert(a,n,num);
    PrintArr(a,n+1);
    return 0;
}
