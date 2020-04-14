#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

void invert(char *str,int *a)
{
    int len=strlen(str),j=0;
    for(int i=len-1;i>=0;i--)
        a[j++]=str[i]-'0';
}

int main(){
    int n;
    char str1[1000];
    char str2[1000];
    int a[1000],b[1000];
    scanf("%d",&n);
    while(n--){
        scanf("%s %s",str1,str2);
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));


        invert(str1,a);
        invert(str2,b);

        int len=strlen(str1)>=strlen(str2)?strlen(str1):strlen(str2);

        for(int j=0;j<len;j++){
            a[j]=a[j]+b[j];
            if(a[j]>9){
                a[j]=a[j]-10;
                a[j+1]++;
            }

        }

        if(a[len])
            printf("%d",a[len]);
        for(int j=len-1;j>=0;j--){
            printf("%d",a[j]);
        }
        printf("\n");
    }
    return 0;
}
