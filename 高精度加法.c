#include "stdio.h"
#include "string.h"
//>=0
void invert(char *str,int *a)
{
    int len=strlen(str),j=0;
    for(int i=len-1;i>=0;i--)
        a[j++]=str[i]-'0';
}

int main()
{
    char str1[205],str2[205],str[205];
    int a[205],b[205],c[205];

    scanf("%s %s",str1,str2);

    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));

    invert(str1,a);
    invert(str2,b);

    int len=strlen(str1) >= strlen(str2) ? strlen(str1):strlen(str2);

    for(int i=0;i<len;i++)
    {
        c[i]=c[i]+a[i]+b[i];
        c[i+1]=c[i]/10;
        c[i]=c[i]%10;
    }

    while(len>=0&&c[len]==0)  len--;

    memset(str,0,sizeof(str));

    int i=0;
    for(int j=len;j>=0;j--)
        str[i++]=c[j]+'0';
    if(strlen(str)==0)
        str[0]='0';
    printf("%s\n",str);

    return 0;
}
