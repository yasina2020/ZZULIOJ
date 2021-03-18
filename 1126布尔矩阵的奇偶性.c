#include"stdio.h"

int main(){

    int n,m;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int f=0;f<n;f++){
            scanf("%d",&m);
            arr[i][f] = m;
        }
    }

    int cnta=0,cntb=0;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        int m=0;
        for(int f=0;f<n;f++){
            m = m + arr[i][f];
        }
        if(m%2!=0){
            cnta++;
            x = i;
        }
    }

    for(int i=0;i<n;i++){
        int m=0;
        for(int f=0;f<n;f++){
            m = m + arr[f][i];
        }
        if(m%2!=0){
            cntb++;
            y = i;
        }
    }
    if(cnta==0 && cntb ==0)
        printf("OK");
    else if(cnta==1 && cntb ==1)
        printf("Change bit(%d,%d)",x,y);
    else
        printf("Corrupt");
    return 0;
}
