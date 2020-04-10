#include <cstdio>
#include <iostream>
#include <cmath>
//单个数素数
using namespace std;

bool judge(int n){
    if(n<2)
        return false;
        int bound = sqrt(n);
    for(int i = 2; i <= bound; i ++){
        if(n % i==0)
            return false;
    }
    return true;
}

//一个区间内的素数--筛选法

const int MAXN = 1e5;

vector<int> prime;
boole IsPrime[MAXN];

void Initial(){
    for(int i=0;i<MAXN;i++){
        IsPrime[i]=true;
    }
    IsPrime[0]=false;
    IsPrime[1]=false;
    for(int i=2;i<MAXN;i++){
        if(!IsPrime[i])
            continue;
        prime.push_back(i);
        for(int j=i*i;j<MAXN;j += i){
            IsPrime[j]=false;
        }
    }
}


int main(){
//    int n;
//    while(scanf("%d",&n)!=EOF){
//        if(judge(n))
//            printf("yes\n");
//        else
//            printf("no\n");
//    }
    int k;
    Initial();
    while(scanf("%d",&k)!=EOF){
        printf("%d",prime[k-1]);
    }
    return 0;
}














