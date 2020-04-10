#include"stdio.h"
#include "string.h"
int main(){
    char str[101];

    int n;
    scanf("%d",&n);

    int x,j,a[n];
    int cnt=0;
    for(j=0;j<n;j++){
        scanf("%s",str);
        scanf("%d",&x);
        for(int i=0;;i++){
            if(str[i]=='.'){
                if(i+1+x <= strlen(str))
                    a[cnt]=str[i+x]-'0';
                else
                    a[cnt] = 0;
               // printf("i+1+x=%d  strlen(str)=%d\n",i+1+x , strlen(str));
               // printf("cnt=%d j=%d\n",cnt,j);
                cnt++;
                break;
            }
        }
    }

    for(int i=0;i<cnt;i++){
        printf("%d\n",a[i]);
    }

}
