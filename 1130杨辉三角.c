#include "stdio.h"

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
           a[i][j]=1;
        }
    }
   // memset(a,1,sizeof(a));

    for(int i=0;i<n;i++)
        for(int j=1;j<=i;j++)
        {
            if(i>1&&j!=i){
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }

     for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        {
           printf("%d ",a[i][j]);
        }
            printf("\n");
     }
    return 0;
}
