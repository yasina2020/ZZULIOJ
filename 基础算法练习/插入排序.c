#include "stdio.h"

#define N 6

void swap(int *a,int *b);
void InsertSort(int a[],int n);


int main()
{
    int a[N];
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);

    InsertSort(a,N);

    for(int i=0;i<N;i++)
        printf("%d ",a[i]);
    return 0;
}

void InsertSort(int a[],int n)
{
    int x;
    for(int i=1;i<n;i++)
    {//i是有序区范围，j是有序区的最后一个元素下标

        x=a[i];
        int j=i-1;
        while(j>=0&&x<a[j])
        {
            a[j+1]=a[j];//向后挪一个位置
            j--;
        }
        a[j+1]=x;
    }

}
