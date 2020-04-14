#include<iostream>
#include<cstdio>
#include<string>
/*
题目描述
输入一个名词英语单词，按照英语语法规则把单数变成复数。规则如下：
（1） 以辅音字母y结尾，变y为i，再加es；
（2） 以s, x, ch, sh结尾，则加es；
（3） 以元音o结尾，则加es；
（4） 其他情况加上s。

输入
输入一个字符串，仅含小写字母，长度不超过20。

输出
输出其对应的复数形式。

样例输入 Copy
butterfly
样例输出 Copy
butterflies
*/
using namespace std;

int main(){
    string str;
    string s="s";
    string s1="es";
    cin>>str;
    int len = str.size()-1;
    if(str[len]=='y'){
        str[len]='i';
        str =str + s1;
    }else if(str[len]=='s'||str[len]=='x'||
             str[len]=='h'&&str[len-1]=='c'||
             str[len]=='h'&&str[len-1]=='s'||
             str[len]=='o'){
         str += s1;
     }else{
         str += s;
     }
     cout<<str<<endl;
    return 0;
}
