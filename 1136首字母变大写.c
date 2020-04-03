
#include "stdio.h"
#include "string.h"

int main(){

    int t=0;
    char ch;
    int k=0;
    while(scanf("%c",&ch)!=EOF){

        if(t==0&&(ch<='z'&&ch>='a'))
            ch=ch-32;
        if(ch==' ')
            k=1;
        if(k==1&&((ch<='z'&&ch>='a')||(ch<='z'&&ch>='A')))
        {
            k=0;
            if((ch<='z'&&ch>='a'))
                ch=ch-32;
        }

        printf("%c",ch);
            t=1;
    }

    return 0;

}
