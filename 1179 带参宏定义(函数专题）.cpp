#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

#define SWAP(a, b, t) { t=a; a=b; b=t; }

int main(){
    char a[3],t;
    scanf("%c %c %c",&a[0],&a[1],&a[2]);
    if(a[0]<a[1])
            SWAP(a[0],a[1],t);
     if(a[1]<a[2])
            SWAP(a[1],a[2],t);
    if(a[0]<a[1])
            SWAP(a[0],a[1],t);
    printf("%c %c %c\n",a[0],a[1],a[2]);

    return 0;
}
