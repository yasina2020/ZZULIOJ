#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
    int m,n;
    scanf("%d%d",&n,&m);
    int a[n][m];
    int b[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
        for(int k=0;k<m;k++){
            b[k][i]=a[i][k];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
