#include <iostream>
#include <cstdio>

#include <cstring>
/*
题目描述:
给你n个整数，请按从大到小的顺序输出其中前m大的数。
输入:
输入有多组数据。每组测试数据有两行，第-行有两个数n,m(0<n,m<1000000),第
二行包含n个各不相同，且都处于区间[-500000 500000]的整数。
输出:
对每组测试数据按从大到小的顺序输出前m大的数。
样例输入:
5 3
3 -35 92 213 -644
样例输出:
213 92 3
*/

using namespace std;

const int MAX = 1e6 + 10;// 1*10^6 + 10
const int RANGE = 5e5;// 5*10^5

int arr[MAX];
int number[MAX];

int main(){
    int n , m;
    while(scanf("%d%d",&n,&m)!=EOF){
        memset(number,0,sizeof(number));
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
            number[RANGE + arr[i] ]  ++;
        }

        int index = 0;
        for(int i=0;i<MAX;i++){
            while(number[i] --){
                arr[index ++] = i - RANGE;
            }
        }
        for(int i= n-1;i >= n - m; i--){
            if(i == n-m){
                printf("%d\n",arr[i]);
            }else{
                printf("%d ",arr[i]);
            }
        }

    }
    return 0;
}
