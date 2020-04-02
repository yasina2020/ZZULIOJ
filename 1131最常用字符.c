//把大写转化为小写
//回车 '\n'
#include "stdio.h"
int main(){
    int str[27]={0};
    char ch;
    int i=0,cnt=0;
    while(scanf("%c",&ch),ch!='\n')
    {
        if(ch>='A'&&ch<='Z')
            ch=ch-'A'+'a';
        if(ch>='a' && ch <= 'z')
            str[ch-97]++;
    }
    int max=str[0],k=0;
    for(int i=1;i<26;i++)
        if(max<str[i])
    {
        max=str[i];
        k=i;
    }
    ch=k+'a';
    printf("%c",ch);
    return 0;
}
