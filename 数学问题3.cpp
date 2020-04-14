#include <cstdio>
#include <iostream>
//#include <cmath>
#include <vector>
//判断单个数是不是质数
using namespace std;
//
//bool judge(int n){
//    if(n<2)
//        return false;
//        int bound = sqrt(n);
//    for(int i = 2; i <= bound; i ++){
//        if(n % i==0)
//            return false;
//    }
//    return true;
//}

//一个区间内的素数--筛选法
//输出第k个质数，

const int MAXN = 100000;

vector<int> prime;

bool IsPrime[MAXN];

void Initial(){
    //fill(IsPrime,IsPrime+MAXN,true);
    for(int i=0;i<MAXN;i++){//先把区间内都变为true
        IsPrime[i]=true;
    }

    IsPrime[0]=false;
    IsPrime[1]=false;//0，1不是质数，false

    for(int i=2;i<MAXN;i++){
        if(!IsPrime[i])//如果i不是质数 下一次循环
            continue;//是质数就顺序执行
        prime.push_back(i);//把质数i加到prime中
        for(int j=i*i;j<MAXN;j += i){//把区间内i的倍数都标记为非质数
            IsPrime[j]=false;
        }
    }
    return ;
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














