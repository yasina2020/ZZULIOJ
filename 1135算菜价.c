#include "stdio.h"
#include "string.h"
//输入时用%*s跳过输入的文字，此题为多实例题目，
//用while（scanf（）！=EOF）实现，最后在输出是用%.1lf来四舍五入保留到角位。
int main(){
    double s=0.0,w,p;
    while( scanf("%*s %lf %lf", &w,&p) != EOF ){
        s += w*p;
    }

    printf("%.1f",s);
    return 0;

}
