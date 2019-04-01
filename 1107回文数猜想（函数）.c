#include"stdio.h"
int inverse(int n)
{
    int m=0;
    while(n>0)
    {
		m=m*10+n%10;
		n=n/10;
	}
	return m;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    while(m=inverse(n),m!=n)
    {
        printf("%d ",n);
        n=n+m;
    }
    printf("%d",n);
    return 0;
}



