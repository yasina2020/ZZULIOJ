#include<iostream>
#include<cstdio>
#include<string>
/*

*/
using namespace std;

int main(){
    string str;
    int n,i;
    cin>>str>>n;
    int len=str.size();
    int cnt=0;
    int index = str.find('1');
    cout<<index;
    while(index<len){
        for( i=index;i<index+n;i++){
            if(str[i]!='1')
                break;
        }
        if(i==index+n-1) cnt++;
        index++;
    }
    cout<<cnt;
    return 0;
}
