#include"stdio.h"

void PrintDigit(int m)
//"12...m...21"
{
    int i;
    for(i=1;i<=m;i++)
        printf("%d",i);
    for(i=m-1;i>0;i--)
        printf("%d",i);
    printf("\n");
}
void PrintSpace(int m)
//"m¸ö¿Õ¸ñ"
{
    int i;
    for(i=m;i>0;i--)
    {
        printf(" ");
    }
}
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        PrintSpace(i-1);
        PrintDigit(n-i+1);
    }
    for(i=n;i>0;i--)
     {
        PrintSpace(n-i+1);
        PrintDigit(i-1);
     }
    return 0;
}
