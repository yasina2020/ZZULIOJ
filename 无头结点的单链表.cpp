#include<iostream>
#include<cstdio>
#include<string>

//目的是学习单链表的操作
//创建，删除，遍历，插入，清空...
using namespace std;
#define INSERT 1//insert==0 尾插法，insert==1，头插法

typedef struct node{
    int data;
   struct node *next;
}Node;

//统计链表中有几个和m相等的数
int count(Node* head,int m);
//释放链表所占的空间
void destory(Node* head);
//遍历并输出
void display_all(Node* head);


int main(){
    int n,x;//读n个数

    #if INSERT==0//尾插法，特点是每次插入都在tail
    //head链表指针，s临时结点 用来暂存接收的数据 ，tail尾结点
    Node *head=NULL, *s, *tail;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        //创建一个结点并开辟一片空间用来接收读入的值
        s=(Node*)malloc(sizeof(Node));
        s->data = x;

        if(i==0) head=s;//如果是第一次，则让head指向s，
        else tail->next=s;//如果是第二个结点，则表明前面有一个tail，让s接在tail后面
        //完成上面的步骤后 一定是s在tail结点后面，再把s变成tail结点
        tail=s;
    }
    //数据接收完后，让tail结点指向null
    tail->next=NULL;

    #else//头插法  特点是每次都在head后面插入
    Node *head=NULL,*s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s = (Node*)malloc(sizeof(Node));
        s->data = x;
        s->next = head;
        head = s;
    }
    #endif

    display_all(head);

    int m;
    cout<<"要查重的数字:";
    cin>>m;
    cout<<count(head,m);
    return 0;
}

void display_all(Node* head){
    Node* p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}


//遍历链表中有几个和m相等的数
int count(Node* head,int m){
    int c = 0;
    Node *p=head;
    while(p){
        if(p->data==m)
            c++;
        p=p->next;
    }
    return c;
}


//释放链表所占的空间
void destory(Node* head){
    Node *p = head,*q;
    while(p){//p=null时退出
        //q指向p，然后p再指向下一个结点
        q=p;
        p=p->next;
        //释放q
        free(q);
    }
}







