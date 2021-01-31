#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

//void encrypt(string *plain, string *cipher)
//{
//    int len = plain->size();
//    int x;char y;
//    for(int i=0;i<len;i++){
//        y=*plain[i]-24;
//        y=(char)x;
//        cipher += y;
//    }
//}

int main(){
    char plain,cipher;
    cin>>plain;

    int len = plain.size();
    int x;char y;
    for(int i=0;i<len;i++){
        x=plain[i]-24;
        //y=(char)x;
        cipher += x;
    }
   // encrypt(&plain,&cipher);
    cout<<x<<cipher<<endl;
    return 0;
}
