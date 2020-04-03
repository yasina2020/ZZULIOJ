#include "stdio.h"
int main()
{
    char ch,str[1005];
    int cnt=0,i;

    scanf("%c",&ch);
    str[0]=ch;
    if(ch!=' ') cnt=1;
    i=1;

    while(scanf("%c",&ch),ch!='\n')
    {
        str[i]=ch;
        if(i>0)
        {
            if(str[i]!=' '&&str[i-1]==' ')
            cnt++;
        }
        i++;

    }
    printf("%d",cnt);
    return 0;
}
