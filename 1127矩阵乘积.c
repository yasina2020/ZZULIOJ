#include "stdio.h"

int main(){
    int m,p,n;
    scanf("%d %d %d",&m,&p,&n);
    int a[m][p],b[p][n],c[m][n];

    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<p;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<m;i++){
        if(i!=0)
            printf("\n");
        for(int j=0;j<n;j++){

            int s=0;
            for(int k=0;k<p;k++)
                s=s+a[i][k]*b[k][j];

            printf("%d ",s);
        }
    }

    return 0;
}
