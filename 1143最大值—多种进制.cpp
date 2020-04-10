#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int MAX=0;

void K_To_D(string str,int k){
    int number=0;
    int bound = str.size();
    for(int i=0;i<bound;i++){
        number *= k;
        number += (str[i]-'0');
    }
    if(MAX<number){
        MAX = number;
    }
}

int main(){
    int n;
    scanf("%d",&n);

    char ch=getchar();
    string str;
    cin>>str;
    //cout<<str<<endl;
    cin>>ch;
    //cout<<ch<<endl;
    K_To_D(str,ch-'0');
    for(int i=1;i<n;i++)
    {
        cin>>str;
        cin>>ch;
        K_To_D(str,ch-'0');
    }
    cout<<MAX<<endl;
    return 0;
}
