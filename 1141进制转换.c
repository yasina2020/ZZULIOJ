#include "stdio.h"
#include "string.h"

void convert(int n, char *str){

    int  r,len = 0;
    do
    {
        r=n%2;
        str[len++] = r + '0';
        n /= 2;
    }while(n != 0);
    str[len] = '\0';

    char t;
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        t = str[i]; str[i] = str[j]; str[j] = t;
    }
}

int main(){
    unsigned int n;
    scanf("%d",&n);
    char  str[1000];
    convert(n,str);
    printf("%s\n",str);

}
