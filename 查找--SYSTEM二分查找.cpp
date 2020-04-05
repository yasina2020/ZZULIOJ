/*
    lower_bound
    返回大于或等于目标值的第一个位置
    upper_bound
    返回大于目标值的第一个位置

    返回的是地址
    找不到返回N+1
*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>


using namespace std;

int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);//输入要查找的值

    sort(a,a+n);//先排序

    int position;
    position = lower_bound(a,a+n,x) - a;
    if(position != n && a[position] == x){
            printf("已找到\n");
    }else{
        printf("未找到\n");
    }

}
