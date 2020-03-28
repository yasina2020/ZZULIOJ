//#include "stdio.h"
//111
//void PrintArr(int a[],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//    if(i==n-1)
//        printf("%d",a[i]);
//    else
//        printf("%d ",a[i]);
//    }
//
//}
//
//int MinIndex(int a[], int n)  //函数返回数组a中最小元素的下标
//{
//    int min,idx;
//    min=a[0];
//    for(int i=0;i<n;i++)
//        if(a[i]<min)
//        {
//            min=a[i];
//            idx=i;
//        }
//    return idx;
//}
//int MaxIndex(int a[], int n)  //函数返回数组a中最大元素的下标
//{
//    int max,idx;
//    max=a[0];
//    for(int i=0;i<n;i++)
//        if(a[i]>max)
//        {
//            max=a[i];
//            idx=i;
//        }
//    return idx;
//
//}
//int main()
//{
//    int t,n,min,max;
//    scanf("%d",&n);
//    int a[n];
//    for (int i=0;i<n;i++)
//        scanf("%d",&a[i]);
//
//    min=MinIndex(a,n);
//    max=MaxIndex(a,n);
//
//    t=a[0];
//    a[0]=a[min];
//    a[min]=t;
//
//    t=a[n-1];
//    a[n-1]=a[max];
//    a[max]=t;
//
//    PrintArr(a,n);
//    return 0;
//}
#include <stdio.h>
int main()
{
    int n,i,j=0,k=0,a[10003],c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    int max=a[0],min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            j=i;
        }
    }
	c=a[n-1];
    a[n-1]=a[j];
    a[j]=c;
    for(i=0;i<n;i++)
    {
    	if(a[i]<min)
        {
            min=a[i];
            k=i;
        }
	}
	d=a[0];
    a[0]=a[k];
    a[k]=d;
    for(i=0;i<n;i++)
        printf("%d%c",a[i],i==n-1?'\n':' ');
    return 0;
}
