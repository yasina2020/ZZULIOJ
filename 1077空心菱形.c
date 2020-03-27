#include"stdio.h"

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i-1;j>0;j--)
            printf(" ");
        printf("*");
        if(i==n)
            printf("\n");
        else
        {
            for(j=2*(n-i-1)+1;j>0;j--)
                printf(" ");
            printf("*\n");
        }
    }
    n=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>0;j--)
            printf(" ");
        printf("*");
        if(i==n)
            printf("\n");
        else
        {
            for(j=2*(n-i)-1;j>0;j--)
                printf(" ");
            printf("*\n");
        }

    }
    return 0;
}
