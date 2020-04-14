#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
    int m,n;
    scanf("%d%d",&m,&n);

    int str[m];
    int sub_str[n];
    for(int i=0;i<m;i++){
        scanf("%d",&str[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&sub_str[i]);
    }

    int flat = 1;
    int cnt=0;
    int i=0,j=0;
    for(; j < n && i < m ;){
        if(str[i] == sub_str[j]){
            i ++;
            j ++;
            flat = 1;
        }else{
            j = 0;
            cnt ++;
            i = cnt;
            flat = 0;
        }
    }
    if(flat==1)
        printf("%d\n",i-j);
    else
        printf("No Answer\n");
    return 0;
}
