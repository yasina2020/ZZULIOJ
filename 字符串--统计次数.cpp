/*
题目描述:
统计一个给定字符串中指定的字符出现的次数。
输入:
测试输入包含若干测试用例，每个测试用例包含2行，第一行为一个长度不超过5的字
符串，第二行为一个长度不超过80的字符串。注意这里的字符串包含空格，即空格也可能
是要求被统计的字符之一。读到#时，输入结束，相应的结果不要输出。

样例输入:
THIS IS A TEST
ing
this is a long test string
#
样例输出:
I 2
i 3
  5
n 2
g 2

*/
#include <cstring>
#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int number[128];

int main(){
    string str1 , str2;
    while(getline(cin,str1)){
        if(str1 == "#"){
            break;
        }
        memset(number, 0 ,sizeof(number));
        getline(cin,str2);
        for(int i=0;i<str2.size();i++){
            number[ str2[i] ] ++;
        }
        for(int i = 0; i < str1.size(); i++){
            printf("%c %d\n",str1[i] , number[str1[i]]);
        }
    }
}
