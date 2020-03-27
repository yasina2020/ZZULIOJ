#include "stdio.h"

int main()
{
    int n;
    char t;
    scanf("%d",&n);
    if(n>=90)
        t='A';
    if(n>=80&&n<=89)
        t='B';
    if(n>=70&&n<=79)
        t='C';
    if(n>=60&&n<=69)
        t='D';
    if(n<60)
        t='E';
    printf("%c",t);
    return 0;

}
