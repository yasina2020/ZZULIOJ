#include <cstdio>
#include <iostream>
#include <stack>
//后进先出
using namespace std;

int how_use_stack() {
    stack<int> myStack;

    for(int i=0; i < 10; ++ i){
        myStack.push(i);    //入栈
    }

    int sum=0;
    while ( !myStack.empty()) { //判空
        printf("%d ",myStack.top());
        sum += myStack.top();   //访问栈顶
        myStack.pop();  //出栈
    }

    printf("\n%d\n", sum);

    return 0;
}

/*
栈的应用

    1.逆序输出
    2.括号匹配
    3.表达式求值
*/

/*
题目描述:
在某个字符串(长度不超过100)中有左括号、右括号和大小写字母，规定(与常见
的算数式子一样)任何一个左括号都从内到外与在它右边且距离最近的右括号匹配。写一
个程序，找到无法匹配的左括号和右括号，输出原来的字符串，并在下一行标出不能匹配
的括号。不能匹配的左括号用"$"标注，不能匹配的右括号用"?"标注。
输入:
输入包括多组数据，每组数据一行，包含一个字符串，只包含左右括号和大小写字
母，字符串长度不超过100。
输出:
对每组输出数据，输出两行，第一行包含原始输入字符，第二行由"$"?"和空格组成，
"$"和"?"表示与之对应的左括号和右括号不能匹配。
样例输入:
)(ttyt())sss)(
样例输出:
)(ttyt())sss)(
?           ?$
*/
//括号匹配
int main__22(){
    stack<int> st;
    string str;
    //string cp_str;
    while(cin>>str){
        string cp_str(str.size(),' ');
        for(int i=0; i < str.size(); i ++){
            if(str[i]=='('){
                st.push(i);
            }else if(str[i]==')' && !st.empty()){
                st.pop();
            }else if(str[i]==')' && st.empty()){
                cp_str[i]=='?';
            }
        }
        while(!st.empty()){
            cp_str[st.top()]='$';
            st.pop();
        }

        cout << str << endl;
        cout << cp_str << endl;
    }
    return 0;
}

//表达式求值: 1+2x3-4/5+6



int main(){



}


