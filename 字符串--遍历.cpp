#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    string str1,str2;
    int sum = 0;
    while(cin>>str1>>str2){
        for(int i=0;i<str1.size();i++){
            for(int j=0;j<str2.size();j++){
                sum += (str1[i] - '0') * (str2[j] - '0');
            }
        }
       // printf("%d\n",sum);
        cout << sum << <<endl;;
    }
}
