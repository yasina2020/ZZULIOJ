#include<stdio.h>
#include<string.h>
int main()
{
    int i,t=1,m;
    char ch,str[50];
    gets(str);
    m=strlen(str);
    if(str[0]>='0'&&str[0]<='9')
    {
        printf("no");
    }
    else if(str[0]=='_'||(str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z'))
    {
        for(i=1;str[i]!='\0';i++)
        {
            ch=str[i];
            if((ch>='0'&&ch<='9')||ch=='_'||(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            t++;
        }
        if(m==t) printf("yes");
        else printf("no");
    }
    else printf("no");
    return 0;
}
