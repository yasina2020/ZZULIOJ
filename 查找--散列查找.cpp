#include <cstdio>
#include <iostream>
#include <algorithm>
#include <unordered_map>

/*
unordered_map
*/
using namespace std;

unordered_map <int , bool> hashTable;


int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        hashTable[i]=true;
    }

    scanf("%d",&x);//输入要查找的值


    if(hashTable[x]){
        printf("已找到\n");
    }else{
        printf("未找到\n");
    }

    return 0;
}
