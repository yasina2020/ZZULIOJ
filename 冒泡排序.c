#include "stdio.h"

#define N 6

void swap(int *a,int *b);

//常规的冒泡
void BubbleSort(int a[],int n);
//若某轮无swap发生，则已经有序
void BubbleSort_1(int a[],int n);
//若某部分已经有序，则下一轮无需考虑
void BubbleSort_2(int a[],int n);

int main()
{
    int a[N];
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);

    BubbleSort(a,N);

    for(int i=0;i<N;i++)
        printf("%d ",a[i]);
    return 0;
}

//常规的冒泡
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

//若某轮无swap发生，则已经有序
void BubbleSort_1(int a[],int n)
{
    //设置一个是否发生交换标志
    int swap_flag = 1   //交换
    for(int i=1;i<n&&swap_flag;i++)
    {
        swap_flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(&a[j],&a[j+1]);
                swap_flag=1;
            }

        }
    }
}

//若某部分已经有序，则下一轮无需考虑
void BubbleSort_2(int a[],int n)
{
    //设置一个记录最后一次交换时两个数中前一个数的下标
    int last_swap_index =n-1;
    for(int i=1;last_swap_index>0;i++)
    {
        int temp = -1;//临时存放下标
        for(int j=0;j<last_swap_index;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(&a[j],&a[j+1]);
                temp=j;
            }

        }
        last_swap_index=temp;
    }
}










