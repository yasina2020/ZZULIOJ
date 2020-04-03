#include "stdio.h"
#include "string.h"
int main(){
    char str1[] ="(max)";
    char str[205];
    int dex[205]={0};
    int max;

    gets(str);

    max=str[0];
    for(int i=1;i<strlen(str);i++)
    {
        if(max<str[i]){
            max=str[i];
        }
    }

    for(int i=0;i<strlen(str);i++)
    {
        if(max==str[i])
            printf("%c(max)",str[i]);
        else
            printf("%c",str[i]);

    }

 return 0;

}
//这个printf实属把我秀到了 ……
//我一直都想的是设计个insert函数
