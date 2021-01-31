#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


//解决约瑟夫环问题
//分别使用数组和链表
//问题描述：n只猴子围成一个圈选大王，从1开始数m个数，
//          第m个猴子淘汰，然后下一只猴子从1开始重新数，
//          最后剩下一只猴子为猴子大王,输出是几号猴子
//1、数组
/*
int main(){
    int n,m;
    cout<<"请输入n只猴子和数字m"<<endl;
    cin>>n>>m;
    int a[n];
    //0表示未被淘汰，1表示被淘汰
    memset(a,0,sizeof(a));
    int cnt=1;//用来计数淘汰了几只
    int j=n-1;
    while(cnt<n){//淘汰n-1只猴子
        int k=0;//计数，用来记录猴子报的数
        do{
            j=(j+1) % n;//计算报数m的猴子的位置
            if(a[j]!=1){//未被淘汰，计数器+1；
                k++;
            }
        }while(k < m);
        a[j]=1;
        cnt++;
        cout<<"淘汰："<<j+1<<endl;
    }

    //遍历找出最后一只猴子，注意数组下标+1是猴子的序号
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cout<<"猴子大王是："<<i+1<<"号"<<endl;
            return 0;
        }
    }
}
*/


//2、链表

typedef struct node{
    int num;
    node *next;
}node;


int main(){
    node *head =NULL;
    node *tial;
    int n,m;
    cout<<"请输入n只猴子和数字m"<<endl;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        node* s=(node*)malloc(sizeof(node));
        s->num=i+1;
        if(i==0) head=s;
        else tial->next=s;
        tial=s;
    }
    tial->next=head;
    int cnt=1;
    node* p=tial;
    while(cnt<n){
        //p指向目标的前一个
        for(int i=1;i<m;i++){
            p=p->next;
        }
        node *q=p->next;
        p->next=q->next;
        free(q);
        cnt++;
    }
    cout<<"猴子王："<<p->num<<endl;
}





