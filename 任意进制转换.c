#include "stdio.h"
#include "string.h"

int NToD(char *num , int n){
    int weight = 1,d = 0;
    int len = strlen(num);

    for(int i = len-1;i >= 0;i--)
    {//通过里面的三种if  把char转化为int，
     //通过 d += 的操作，把每一位相乘；
     // 1101（2） = 1*2^0 + 0*2^1 + 1*2^2 + 1*2^3 = 13（10）
        if(num[i] <= 'z' && num[i] >= 'a'){
            d += (num[i] - 'a' + 10)*weight;
        }
        else if(num[i] <= 'Z' && num[i] >= 'A'){
            d += (num[i] - 'A' + 10)*weight;
        }
        else if(num[i] <= '9' && num[i] >= '0'){
            d += (num[i] - '0')*weight;
        }
        weight *= n;//向左移一位，是权值变为原来的n的。
    }
    return d;
}

void DToM(int d,int m,char *mnum){//把十进制 d 化成m进制的mnum
    //十进制化成其他进制  辗转相除 取余数 逆置
    int len = 0,r;
    do{
        r = d % m;
        if(r>=10)//这里要区分是不是十六进制  并且把int转化为char
            mnum[len++] = r - 10 + 'A';
        else
            mnum[len++] = r + '0';
        d /= m;
    }while(d!=0);
    mnum[len] = '\0';

    char t;
    for(int i = 0,j = len-1;i<j;i++,j--){
        t = mnum[i]; mnum[i] = mnum[j]; mnum[j] = t;
    }
}

int main(){

    int N,M;
    char Nnum[20],Mnum[20];

    printf("n  Nnum to M\n");
    scanf("%d %s %d",&N,Nnum,&M);
    int d = NToD(Nnum,N);
    DToM(d,M,Mnum);

    printf("%s",Mnum);

    return 0;
}
