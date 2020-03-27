
#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    int i;
    scanf("%d",&i);

    for(i;i+1<=n-1;i++)
        A[i]=A[i+1];

    if(n==1)
        return 0;
    else{
        for(int i=0;i<n-1;i++)
        printf("%d ",A[i]);
    }
    return 0;
}
