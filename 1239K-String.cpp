#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
    int N,k;
    cin>>N;
    while(N--){
        cin>>k;
        string str;
        cin>>str;
        int aph[26]={0};
        int len=str.size();
        for(int i=0;i<len;i++){
            aph[str[i]-'a']++;
        }
//        for(int i=0;i<26;i++){
//            cout<<"aph:"<<aph[i]<<endl;
//        }
        int f=0;
        for(int i=0;i<26;i++){
            if(aph[i]!=0){
                if(aph[i]%k!=0){
                    printf("No\n");
                    f=1;
                    break;
                }
            }
        }
        if(f==0){
            printf("Yes\n");
        }
    }
    return 0;
}
