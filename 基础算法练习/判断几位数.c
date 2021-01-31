#include"stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("%d",i);
    return 0;
}