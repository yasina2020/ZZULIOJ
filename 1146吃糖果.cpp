#include<iostream>
#include<cstdio>
#include<string>
/*
解题思路：
这是一道排列问题，就是将若干种类的糖果按要求排列，
相同种类的糖果不能相邻。这就要考虑插孔法。
先考虑数量最多的那一种糖果（假设这种糖果有n个）
先间隔排好，留出n-1个空格。剩下的糖果总数大于等于n-1，
就可以使得数量最多的那一种糖果不会相邻，
再将剩下的糖果按种类依次插入之前已经排好糖果的空隙中，
则可以满足题目的要求，输出yes。
如果剩下的糖果总数小于n-1，数量最多的那一种糖果
一定会出现相邻的状况，因此输出no。
*/
using namespace std;

int main(){
    int t,n;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
        scanf("%d",&n);
        int a[n];
        int maxn,index=0;
        scanf("%d",&a[index]);
        maxn = a[index];
        for(int i=1;i<n;i++){
            scanf("%d",&a[i]);
            if(maxn<a[i]){
                maxn = a[i];
                index = i;
            }
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            if(i != index){
                sum += a[i];
            }
        }
        if(sum>=maxn-1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
