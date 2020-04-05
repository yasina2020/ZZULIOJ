
#include<stdio.h>
int main(){
	int a,b,t;
	scanf("%d %d", &a, &b);
    if(a>0&&b>0)
        t=1;
     if(a<0&&b>0)
        t=2;
     if(a<0&&b<0)
        t=3;
     if(a>0&&b<0)
        t=4;
        printf("%d\n",t);
	return 0;
}
