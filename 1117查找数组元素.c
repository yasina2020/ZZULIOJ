#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    int x,idx=-1;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(x==A[i])
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
    {
        printf("Not Found");
        return 0;
    }

    int i=idx;
    for(i;i+1<=n-1;i++)
        A[i]=A[i+1];

    if(n==1)
        return 0;
    else{
        for(int i=0;i<n-1;i++)
        printf("%4d",A[i]);
    }

    return 0;
}

