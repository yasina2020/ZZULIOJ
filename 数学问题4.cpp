//质因子的分解  30=2*3*5
//短除法 120=2^3 *3^1 *5^1
#include<iostream>
#include<cstdio>
#include <vector>
#include <string>

using namespace std;

const int MAXN = 200;
vector<int> prime;
bool IsPrime[MAXN];

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
    return ;
}
int NumberOfPrimeFactor(int number){
    int answer = 0;
    for(int i=0;i<prime.size();i++){
        int factor = prime[i];
        int current = 0;
        while(number%factor==0){
            current++;
            number /= factor;
        }
        answer += current;
    }
    if(number > 1)
        answer++;
    return answer;
}

int main(){

    Initial();
    int n;
    printf("input plz!\n");
    while(scanf("%n",&n)!=EOF){
        printf("%d",NumberOfPrimeFactor(n));
    }
}
