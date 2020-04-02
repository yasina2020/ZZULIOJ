#include "stdio.h"

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    double a[m][n];
    double s;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%lf",&a[i][j]);

    for(int i=0;i<n;i++)//n=4
    {
        s=0;
        for(int j=0;j<m;j++){//m=5 ÈËÊý
            s=s+a[j][i];
//            printf("%.2f\n",s);
        }
        if(i!=n-1)
            printf("%.2f ",s/m);
        else
            printf("%.2f",s/m);
    }

    return 0;

}
