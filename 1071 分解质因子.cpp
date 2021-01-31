#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        cout<<"*";
        if(i==1)
            cout<<endl;
        else {
            for(int k=0;k<2*i-3;k++)
                cout<<" ";
            cout<<"*"<<endl;
        }
   }

   for(int i=2;i<=n;i++){
    for(int j=1;j<=i-1;j++)
        cout<<" ";

    cout<<"*";
     if(i==n)
            cout<<endl;
        else {
            for(int k=0;k<2*(n-i)-1;k++)
                cout<<" ";
            cout<<"*"<<endl;
        }

   }
   return 0;
}
