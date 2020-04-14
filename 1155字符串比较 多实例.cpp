#include <stdio.h>
#include <string.h>
//X貌似是少了一种情况
/*
先比较
等长部分的字符串
    s1=s2
      a A no
      A a yes
    s1>s2 no
    s1<s2 yes
    其他都是相等
不等长部分
    s1len>s2len no
    s1len<s2len yes

*/
int main(){
    char str1[10000];
    char str2[10000];
    while(scanf("%s",str1)!=EOF){

        scanf("%s",str2);
        int s1,s2;
        int len = strlen(str1)<=strlen(str2)?strlen(str1):strlen(str2);
        int flat=0;
        for(int i=0;i<len;i++){
            s1=s2=0;//小写标记
            if(str1[i]<='Z'){
                str1[i] += 32;//如果是大写变成小写
                s1=1;//表示这是大写
            }
            if(str2[i]<'Z'){
                str2[i] += 32;
                s2=1;
            }
            if(str1[i]==str2[i] && s2!=s1){
                if(s1==0){
                    printf("NO\n");
                    flat=1;
                    break;
                }else{
                    printf("YES\n");
                    flat=1;
                    break;
                }
            }else if(str1[i]>str2[i]){
                    printf("NO\n");
                    flat=1;
                    break;
            }else if(str1[i]<str2[i]){
                    printf("YES\n");
                    flat=1;
                    break;
            }
        }
        if(flat==0 && strlen(str1)>strlen(str2))
             printf("NO\n");
        else if(flat==0 && strlen(str1)<strlen(str2))
            printf("YES\n");
        else if(flat==0 && strlen(str1)==strlen(str2))
            printf("NO\n");
    }
    return 0;
}

/*
A
a
a
A
Aa
AA
AA
Aa
ABc
AB
AB
ABc
AbC
ABC
ABC
AbC
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
     int m,n,i,max;
     char a[10000]={0},b[10000]={0};
     while(scanf("%s%s",a,b)!=EOF){
          m=strlen(a);
          n=strlen(b);
          if(strcmp(a,b)==0)
              printf("NO\n");
          else{
            max=m>n?m:n;
            for(i=0;i<max;i++){
                if(a[i]==b[i])
                    continue;
                else{
                    if((a[i]>='a'&&a[i]<='z'&&b[i]>='a'&&b[i]<='z')
                       ||(a[i]>='A'&&a[i]<='Z'&&b[i]>='A'&&b[i]<='Z')){
                        if(a[i]<b[i]){
                            printf("YES\n");
                            break;
                        }else{
                            printf("NO\n");
                            break;
                        }
                   }else if(a[i]>='a'&&a[i]<='z'&&b[i]>='A'&&b[i]<='Z') {
                        if(a[i]-32<b[i]) {
                            printf("YES\n");
                            break;
                        }else{
                             printf("NO\n");
                             break;
                        }
                   }else if(a[i]>='A'&&a[i]<='Z'&&b[i]>='a'&&b[i]<='z'){
                        if(a[i]+32<=b[i]){
                            printf("YES\n");
                            break;
                        }else{
                            printf("NO\n");
                            break;
                        }
                   }
                   else{
                         if(a[i]<b[i]){
                            printf("YES\n");
                            break;
                         }else{
                            printf("NO\n");
                            break;
                        }
                      }
                  }
            }
              }
     }
    return 0;
}

*/
