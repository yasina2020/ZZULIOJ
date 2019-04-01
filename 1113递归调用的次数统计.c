#include <stdio.h>
int fib(int k);
int i=0;
int main(void )
{
    int n;
    scanf("%d", &n);
    printf("%d\n",fib(n));
    printf("递归调用了%d次",i);
    return 0;
}

int fib(int k )
{
    i++;
    if(k == 1 || k == 2)
        return 1;
    else
        return fib(k-1) + fib(k-2);

}
/*
 0 1 2 3 4 5 6 7  8  9  10 11
 0 1 1 2 3 5 8 13 21 34 55 89
*/
