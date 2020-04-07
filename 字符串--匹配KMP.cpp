#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

const int MAX = 100;
int next_table[MAX];

void get_next(string sub_str){
    int m = sub_str.size();
    int j = 0;
    next_table[j] = -1;
    int t = next_table[j];
    while(j < m){
        if(t == -1 || sub_str[t] == sub_str[j]){
            t++;
            j++;
            next_table[j] = t;
        }else{
            t = next_table[t];
        }
    }
    return ;
}

int KMP(string str,string sub_str){
    get_next(sub_str);
    int n = str.size();
    int m = sub_str.size();
    int i = 0;
    int j = 0;
    while(i < n && j < m){
         if(j == -1 || str[i] == sub_str[j] ){
            i++;
            j++;
        }else{
            j = next_table[j];
        }
    }
    if(j == m){
        return i-j;
    }else{
        return -1;
    }

}


int main(){
    string str;
    string sub_str;

    cout<<"请输入主串str[100]\n"<<endl;
    cin>>str;
    //str = "i love you";
    cout<<"请输入子串sub_str\n"<<endl;
    cin>>sub_str;
    //sub_str = "love";

    int position = KMP(str,sub_str);

    cout<<position + 1<<endl;
    return 0;
}
