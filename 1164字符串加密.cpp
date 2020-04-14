#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

bool IsZiMu(char ch){
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        return true;
    else
        return false;
}

int main(){
    string str;
    int n;
    getline(cin,str);//cin不会读空格和回车 ∴用getline
    cin>>n;
    n=n%26;
    int len = str.size();
    for(int i=0;i<len;i++){
        if(IsZiMu(str[i])){
            if(str[i]>='a'&&str[i]<='z'){//小写
               // cout<<str[i];
                str[i]=(str[i]-'a'+n)%26+'a';//先算出字母是第几个，即变成int
                                             //然后后移，再%26，最后变成char
                //cout<<"->"<<str[i]<<endl;
            }else if(str[i]>='A'&&str[i]<='Z'){//大写
                //cout<<str[i];
                str[i]=(str[i]-'A'+n)%26+'A';
               // cout<<"->"<<str[i]<<endl;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
