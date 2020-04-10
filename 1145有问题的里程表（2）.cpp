#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int num,sum=0;
    int i=0,j,k;
    int m;
    int a[10];
    cin>>num;
    while(num>0)
    {
       a[i]=num%10;
       num=num/10;
       i++;
    }
    for(j=0;j<i;j++)
    {
       m=1;
       for(k=1;k<=j;k++)
       {
           m=m*9;
       }
       if(a[j]<=3)
        sum=sum+a[j]*m;
       if(a[j]>=5)
        sum=sum+(a[j]-1)*m;
    }
    cout<<sum<<endl;
    return 0;
}
