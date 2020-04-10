#include <cstdio>
#include <iostream>

using namespace std;

//最大公约数--辗转相除法
int GCD(int a,int b){
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

//最小公倍数LCM(a,b)=(a*b) / GCD(a,b);
int LCM(int a,int b){
    return (a*b) / GCD(a,b);
}


int main(){
    int m,n;
    int r;
    while(scanf("%d%d",&m,&n)!=EOF){
        r = GCD(m,n);
        printf("m=%d和n=%d的最大公约数是%d\n",m,n,r);
    }

    return 0;
}
