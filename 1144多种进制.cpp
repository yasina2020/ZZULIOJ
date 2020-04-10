#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

void D_To_k(int n,int k){
    vector<int> arr;
    if(n==0)
        arr.push_back(0);
    while(n!=0){
        arr.push_back(n%k);
        n /= k;
    }

    for(int i=arr.size()-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    D_To_k(n,2);
    D_To_k(n,3);
    D_To_k(n,7);
    D_To_k(n,8);
    return 0;
}
