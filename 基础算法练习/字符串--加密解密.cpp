/*
例题4.3简单密码
题目描述:
    Julius Caesar曾经使用过种很简单的密码。 对于明文中的每个字符，用字母表中后I
5位所对应的字符代替，就得到了密文。例如，字符A用F代替。下 面就是密文和明文中字
符的对应关系:
密文: ABCDE FGHIJKL MNOPQRS T UV WX Y Z
明文: VWXY Z ABCDE FGHIJKL MNOPQRS T U
    你的任务是对给定的密文进行解密，得到明文。需要注意的是，密文中出现的字母都
是大写字母。密文中也包括非字母的字符，对这些字符不用进行解码。
输入:
输入中的测试数据不超过100组。每组数据都有如下形式，而且各组测试数据之间没有空白的行。
一组测试数据包括三部分:
1.起始行:一行，包括字符串"START"。
2.密文:一行，给出密文，密文不为空，而且其中的字符数不超过200。
3.结束行:一行，包括字符串"END"
在最后一组测试数据之后有一行，包括字符串"ENDOFINPUT。
*/

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    string str;
    while(getline(cin,str),str!="ENDOFINPUT"){
//        if(str == "ENDOFINPUT"){
//            break;
//        }
        getline(cin,str);
        for(int i=0;i<str.size();i++){
            //解密
            str[i] = (str[i] - 'A' -5 + 26) % 26;
        }
        cout<<str<<endl;
        getline(cin,str);//getlint(输入方式，输入对象) 一次获得一行
                         //
    }
}
