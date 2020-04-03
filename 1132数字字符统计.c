#include "stdio.h"
int main(){
    int n,cnt;
    char ch;

    scanf("%d",&n);
    scanf("%c",&ch);
    for(int j=1;j<=n;j++)
    {
        cnt=0;
        while(scanf("%c",&ch),ch!='\n')
        if(ch<='9'&&ch>='0')
            cnt++;
        printf("%d\n",cnt);
    }

    return 0;
}
