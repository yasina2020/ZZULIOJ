/*
题目描述:
问模式串在问文本串中有多少个完全匹配的子串。
输入:
第一行给定n，之后输入n组样例。
输出:
每组样例输出模式串在文本串中有多少个完全匹配的子串

样例输入:
3
BAPC
BAPC
AZA
AZAZAZA
VERDI
AVERDXIVYERDIAN
样例输出:
1
3
0

*/
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
    int sum = 0;
    while(i < n ){
        if(j == -1 || str[i] == sub_str[j] ){
            i++;
            j++;
        }else{
            j = next_table[j];
        }
        if(j == m){
            sum ++;
            j = next_table[j];//允许字符重复匹配
                              //比如s1=asa匹配s2=asasasa，s2[2]用了多次
         // j = 0;//不允许字符重复匹配。
        }
    }
    return sum;
}


int main(){
    int cnt;
    string str;
    string sub_str;
    scanf("%d",&cnt);
    while(cnt--){
        cin>>sub_str;
        cin>>str;

       printf("%d\n", KMP(str,sub_str));
    }

    return 0;
}

