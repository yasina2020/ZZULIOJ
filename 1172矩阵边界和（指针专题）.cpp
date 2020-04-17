#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if(i==0||i==n-1){
                sum += a[i][j];
            }else if((j==0||j==m-1)&&(i>0&&i<n-1)){
                sum += a[i][j];
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
