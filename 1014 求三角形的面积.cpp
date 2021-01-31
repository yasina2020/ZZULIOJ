#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    //cin<<a<<b<<c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double p=(a+b+c)/2;
    double s=p*(p-a)*(p-b)*(p-c);
    s=sqrt(s);
    printf("%.2f\n",s);
    return 0;
}
