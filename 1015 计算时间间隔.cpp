#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int h,m,s;
    int h1,m1,s1;
    int cnt=0;
    scanf("%d:%d:%d",&h,&m,&s);
    scanf("%d:%d:%d",&h1,&m1,&s1);
    cnt=(h1-h)*60*60+60*(m1-m)+s1-s;
    printf("%d",cnt);
    return 0;
}
