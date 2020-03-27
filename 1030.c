
#include<stdio.h>
int main(){
	int a,b,c,t;
	scanf("%d %d %d", &a, &b, &c);
	if(a > c){t = a; a = c; c = t;}
	if(a > b){t = a; a = b; b = t;}
	if(b > c){t = b; b = c; c = t;}
	if(a+b>c&&c-a<b&&(a*a+b*b==c*c))
        printf("yes\n");
	else
        printf("no\n");
	return 0;
}
