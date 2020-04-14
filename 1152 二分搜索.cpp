#include<stdio.h>

int bs(int x,int str[],int len){
    int index=-1;
    int left=0;
    int right=len-1;
    while(left<=right){
        int middle = (left+right)/2;
        //int middle = left + (right-letf)/2
        if(x==str[middle]){
            index=middle;
            break;
        }else if(x<str[middle])
            right=middle-1;
        else if(x>str[middle])
            left=middle+1;
    }
    return index;
}

int main(){
    int n,m;
    scanf("%d",&n);
    int str[n];
    for(int i=0;i<n;i++){
        scanf("%d",&str[i]);
    }
    scanf("%d",&m);

    while(m--){
        //printf("m---%d\n",m);
        int x;
        scanf("%d",&x);
        int index = bs(x,str,n);
        if(index==-1)
            printf("Not found!\n");
        else
            printf("%d\n",index);
    }
    return 0;
}
