#include "stdio.h"

int b_To_D(char str[]){
    int x=0;
    for(int i=0; str[i]!='\0';i++){
        x = x * 2 + (str[i]-'0');
    }

return x;
}

int main(){
    int x[3];
    char str[25];
    char ch;
    for(int i=0;i<3;i++){
        scanf("%s",str);
        x[i]=b_To_D(str);
    }

    //Ã°ÅİÅÅĞò
    int temp;
    for(int i=0;i<3-1;i++){
        for(int j=i+1;j<3;j++){
            if(x[i]>x[j]){
                temp = x[i];
                 x[i]=x[j];
                 x[j]=temp;
            }
        }
    }
    for(int i=0;i<3;i++){
        if(i==2)
            printf("%d",x[i]);
        else
            printf("%d ",x[i]);
    }
}
