#include<iostream>
#include<cstdio>
#include<algorithm>
//algorithm algorithm
using namespace std;
/*
MM/DD/YYYY--------Ð¡µ½´ó
*/
typedef struct{
    int y;
    int m;
    int d;
}DATA;

bool compare(DATA a,DATA b){
    if(a.y!=b.y)
        return a.y<b.y;
    if(a.m!=b.m)
        return a.m<b.m;
    return a.d<b.d;
}
int main(){
    DATA data[100];
    int t;int i=0;
    while(scanf("%d/%d/%d",&data[i].m,&data[i].d,&data[i].y)!=EOF){
        i++;
    }
    sort(data,data+i,compare);
    for(int j=0;j<i;j++){
        printf("%02d/%02d/%d\n",data[j].m,data[j].d,data[j].y);
    }
    return 0;
}
