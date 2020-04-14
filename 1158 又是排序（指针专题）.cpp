#include<iostream>
#include<cstdio>

#include <algorithm>

using namespace std;

int compare(int a,int b){
    return a > b;
}

void psort( int *pa, int *pb,int *pc,int *pd)
{
    int a[4];
    a[0]=*pa;
    a[1]=*pb;
    a[2]=*pc;
    a[3]=*pd;
    sort(a,a+4,compare);
    *pa=a[0];
    *pb=a[1];
    *pc=a[2];
    *pd=a[3];
}
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    psort(&a,&b,&c,&d);
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}
