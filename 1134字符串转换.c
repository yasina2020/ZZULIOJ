
#include "stdio.h"
#include "string.h"
//double pow(double x,double y);
//对整数运算会出现误差 所以自己定义一个int pow

int int_pow(int x,int n)
{
    int t=1;
    for(int i=0;i<n;i++)
    {
        t = t*x;
    }

    return t;
}

int main(){

    int cnt=0,x=0;
    char ch,str[105];
    while(scanf("%c",&ch),ch!='\n'){
        if(ch<='9'&&ch>='0'){
            str[cnt++]=ch;
        }
    }

////    int len = strlen(str);
    for(int i=0;i<cnt;i++){
        x = x + (str[i]-'0') * int_pow(10,cnt-i-1);
    }

    //str[0]-str[cnt-1]中存储着数字 从高位到低位

    printf("%d\n",x*2);
    return 0;
}
