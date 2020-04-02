#include "stdio.h"

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);


    int t=1;

    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++){
            if(a[i][j]!=0)
                    t=0;
        }

    if(t)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;

}
















