/*
题目描述:
有家动物收容所只收留猫和狗，但有特殊的收养规则。收养人有两种收养方式
第一种为直接收养所有动物中最早进入收容所的。
第二种为选择收养的动物类型(猫或狗)，并收养该种动物中最早进入收容所的。
给定一个操作序列代表所有事件。若第一个元素为1,则代表有动物进入收容所。第
二个元素为动物的编号，正数代表狗，负数代表猫。若第一个元素为2,则代表有人收养
动物。第二个元素若为0，则采取第一种收养方式;若为1,则指定收养狗;若为-1,则指
定收养猫。请按顺序输出收养动物的序列。若出现不合法的操作，即没有可以符合领养要
求的动物，则将这次领养操作忽略。
输入:
第一个是n,它代表操作序列的次数。接下来是n行，每行有两个值m和t，分别代表题目
中操作的两个元素。
输出:
按顺序输出收养动物的序列，编号之间以空格间隔。
6
1 1
1 -2
2 0
1 2
2 -1
2 1

*/


#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;
struct Animal{
    int number;//动物 >0 --dog  <0 --cat
    int order;//顺序
    Animal(int n,int x):number(n),order(x){}
};

queue<Animal> cat;
queue<Animal> dog;

int main(){
    int n;
    int order = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        int m,t;
        scanf("%d%d", &m, &t);
        if(m == 1){//-------------push-----------------
            if(t > 0){//push_dog
                dog.push(Animal( t , order++));
            }else{//push_cat
                cat.push(Animal(t , order++));
            }
        }else{//----------------pop------------------
            if(t == 0 && !dog.empty() && !cat.empty()){
                 //第一种pop方法 且dog  cat都有
                if(dog.front().order > cat.front().order){
                    printf("%d ",dog.front().number);
                    dog.pop();
                }else{
                    printf("%d ",cat.front().number);
                    cat.pop();
                }
            }else if(t == 0 && !dog.empty() && cat.empty()){
                printf("%d ",dog.front().number);
                dog.pop();
            }else if(t == 0 && dog.empty() && !cat.empty()){
                 printf("%d ",cat.front().number);
                 cat.pop();
            }else if(t == 1 && !dog.empty()){//t=1要dog  且有dog
                printf("%d ",dog.front().number);
                dog.pop();
            }else if(t == -1 && !cat.empty()){//t=-1 要cat  且有cat
                 printf("%d ",cat.front().number);
                 cat.pop();
            }
        }
    }
    printf("\n");
    return 0;
}
