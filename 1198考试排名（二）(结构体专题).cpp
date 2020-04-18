/*
某次考试一共8题（A，B，C，D，E，F，G，H），
每个人做的题都在对应的题号下有个数量标记，
负数表示该学生在该题上有过的错误提交次数，
但到现在还没有AC，正数表示AC所耗的时间，
如果正数a跟上一对括号，里面有个整数b，那就表示该学生提交该题AC了，
耗去了时间a，同时，曾经错误提交了b次
8
Smith	  -1    -16 8   0   0   120 39  0
John	  116   -2  11  0   0   82  55(1)   0
Josephus  72(3) 126 10  -3  0   47  21(2)   -2
Bush	  0 -1  -8  0   0   0   0   0
Alice	  -2    67(2)   13  -1  0  133    79(1)  -1
Bob	      0 0   57(5)   0   0   168 -7  0
首先按照过题数排名，
    过题数相同的队伍按照罚时排名，
    罚时也相同则队伍 id 较小的队伍列在前面。

对于某题的罚时，
    如果这道题最后没有通过（没有正确提交），
        则这题的罚时为 0，
    否则这道题的罚时为：AC
        从比赛开始到该题第一次正确提交经过的时间
         + 第一次通过之前的错误提交次数 * 20 分钟。
*/
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

typedef struct{
    string name;
    int title=0;//ac的题目数
    int time=0;//罚时
}STU;

bool compare(STU a,STU b){
    if(a.title!=b.title)
        return a.title>b.title;
    if(a.time!=b.time)
        return a.time<b.time;
    return a.name<b.name;

}

int main(){
    int n;
    scanf("%d",&n);//读入题目数
    STU stu[101];
    int i=0;
//----------输入------------------------------------
    while(cin>>stu[i].name){
        for(int j=0;j<n;j++){//这个循环用来依次读入成绩
            /*
            成绩分为三种情况
              1、负数
                   该请况为未AC，没有答题成功，不计入时间
              2、正数无括号
                   该情况为只提交了一次就成功了 数值为消耗的时间
              3、正数+括号
                   提交了好几次才成功，失败的次数为括号内的数值，
                   前面的为成功的那次消耗的时间
            由上可知，可以用if
                if情况1 直接跳过
                if情况2 将时间和AC数加上
                    然后判断后面有没有括号
                    如果有 则读出括号内的失败的次数，将时间加上
            */
            int r;
            scanf("%d",&r);
            if(r<=0)
                continue;//r是成绩，<=0代表未通过，不参与排名的计算
            stu[i].title++;
            stu[i].time +=r;

            if(getchar()!='(')
                continue;//后面没有括号，则是一次ac，
            scanf("%d",&r);
            stu[i].time += 20*r;
            getchar();///输入）
            getchar();////输入制表符
        }
        i++;//下一个学生；
    }
//------------排序sort-------------------
    sort(stu,stu+i,compare);
//输出
/*
每个学生占一行，输出名字（10个字符宽，左对齐），
    写个for循环输出剩余的空格，保证name+空格为10个字符
做出的题数（2个字符宽，右对齐）和时间分（4个字符宽，右对齐）。
    %2d
名字、题数和时间分相互之间有一个空格。
*/
    for(int k=0;k<i;k++){
        cout<<stu[k].name;
        //不够十个字符就用空格代替
        for(int e=0;e<10-stu[k].name.length();e++)
            printf(" ");
        printf(" %2d %4d\n",stu[k].title,stu[k].time);
    }
    return 0;
}

