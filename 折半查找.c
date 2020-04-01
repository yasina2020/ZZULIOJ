#include "stdio.h"

int BinSearch(int a[],int n,int x)//返回x的序号
{
    int left,right,mid;
    left=0;
    right=n-1;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(x==a[mid])
            return mid;
        else if(x<a[mid])
            right=mid-1;
            else left=mid+1;
    }

    return -1;
}

void BubbleSort(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {//控制轮数 n-1轮
        for(j=0;j<=n-1-i;j++)
        {//每一轮中相邻两个比较，
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int n,x,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);//输入要查找的值
    //BubbleSort(a,n);//先排序
    t = BinSearch(a,n,x);//查找x，找到返回x的序号，否则返回-1；
    if(t==-1)
    printf("未找到\n");
    printf("已找到，x的位置为%d\n",t);
}
