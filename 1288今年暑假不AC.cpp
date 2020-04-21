#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

typedef struct {
    /**开始时间*/
    int st;
    /**结束时间*/
    int et;
}Pro;

bool compare(Pro a,Pro b){
    return a.et<b.et;
}

int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0) break;
        Pro pro[n];
        for(int i=0;i<n;i++){
            scanf("%d %d",&pro[i].st,&pro[i].et);
        }
        sort(pro,pro+n,compare);
        int cnt=1;
        int endtime=pro[0].et;
        for(int i=1;i<n;i++){
            if(pro[i].st>=endtime){
                endtime=pro[i].et;
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
