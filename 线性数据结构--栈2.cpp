/*
例题5.6简单计算器
题目描述:
读入一个只包含 + - * /的非负整数计算表达式，计算该表达式的值。
输入:
测试输入包含若干测试用例，每个测试用例占一行，每行不超过200个字符，整数和
运算符之间用一个空格分隔。没有非法表达式。当一行中只有0时输入结束，相应的结果
不要输出。
输出:
对每个测试用例输出一行，即该表达式的值，精确到小数点后2位。
样例输入:
1 + 2
4 + 2 * 5 - 71 / 11
0
样例输出:
3.00
13.36
*/

#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

using namespace std;

//isdigit(str[index]) --系统函数
//--判断是不是数字，是返回true

int Priority(char c){//返回优先级
    if(c=='#')
        return 0;
    else if(c=='$'){
        return 1;
    }else if(c=='+'||c=='-'){
        return 2;
    }else{
        return 3;
    }
}

/*
int&  如果变量b是变量a的引用 那么无论a，b中任
何一个值改变，另外一个也相应的改变，在声明一个引用时，
必须同时使之初始化，即声明它代表哪一个变量。
*/
double GetNumber(string str,int& index){//从str中获得一个值
    double number = 0;
    while(isdigit(str[index])){
        number = number * 10 + str[index] - '0';
        index++;
    }
    /*
    此处可以添加小数的判断
    */
    return number;
}

double Calculate(double x,double y,char op){//运算
    double result = 0;
    if(op == '+'){
        result = x+y;
    }else if(op == '-'){
        result = x-y;
    }else if(op == '*'){
        result = x*y;
    }else if(op == '/'){
        result = x/y;
    }
    return result;
}


int main(){
    string str;
    while(getline(cin,str)){
        if(str == "0"){
            break;
        }
        int index=0;

        stack<char> oper;
        stack<double> data;

        oper.push('#');
        str = str + '$';
        while(index < str.size()){
            if(str[index]==' '){
                index++;
            }else if(isdigit(str[index])){
                data.push(GetNumber(str,index));
            }else {
                if(Priority(oper.top()) < Priority(str[index])){
                    oper.push(str[index]);
                    index++;
                }else{
                    double y = data.top();
                    data.pop();
                    double x = data.top();
                    data.pop();
                    char op = oper.top();
                    oper.pop();
                    data.push(Calculate(x,y,op));
                }
            }
        }
        printf("%.2f",data.top());
    }
    return 0;
}








