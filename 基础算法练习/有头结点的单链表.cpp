#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

typedef struct node{
    int data;
    struct node *next;
}Node;

void insert(Node *head,int x);
void display(Node* head);
void delete_node(Node* head,int k);
int find_x(Node* head,int x);
void insert_m_to_k(Node* head,int m,int k);


int main(){
    //创建一个带头结点的链表
    Node *head;
    head=(Node*)malloc(sizeof(Node));
    head->next=NULL;

    //插入n个数据
    int n,x;
    cout<<"插入数据的长度：";
    cin>>n;
    while(n--){
        insert(head,x);
    }
    display(head);

//    cout<<"输入要删除第几个：";
//    cin>>n;
//    delete_node(head,n);
//    display(head);

//    cout<<"输入要查找的数：";
//    cin>>n;
//    cout<<"该数在第"<<find_x(head,n)<<"个"<<endl;
//    display(head);

    cout<<"把m插在第k个结点：";
    cin>>n>>x;
    insert_m_to_k(head,n,x);
    display(head);

    return 0;
}

//这里实现的是头插法
void insert(Node *head,int x){
    //p指向第一个结点
    Node *p=head->next;
    //prep指向p的前一个结点
    Node *prep=head;
    //s开辟一片空间暂时接收数据x
    Node *s=(Node*)malloc(sizeof(Node));
    cout<<"输入要插入的数据：";
    cin>>x;
    s->data=x;
    //s在第一个节点前面
    s->next = p;
    //头结点指向s
    prep->next = s;

    //第二次插入的时候p=head-》next指的就是这一次的s
    //prep指的依然是头结点
    //所以这里是头插法
}

//把m插入到第k个节点（头结点是第0个结点）
void insert_m_to_k(Node* head,int m,int k){
    Node* p=head,*q;
    for(int i=1;i<k;i++){
        p=p->next;
    }
    q=p->next;

    Node* s=(Node*)malloc(sizeof(Node));
    s->data=m;

    s->next=q;
    p->next=s;
}


//删除第k个节点，头结点是第0个结点
void delete_node(Node* head,int k){
    Node* p=head;
    //这里移动到第k个节点的前一个结点
    for(int i=1;i<k;i++){
        p=p->next;
    }
    Node* q=p->next;//q指向第k个
    p->next=q->next;//让第k-1个指向第k+1个
    free(q);//释放第k个结点
}

//查找x是第几个节点
int find_x(Node* head,int x){
    Node* p=head->next;
    int cnt=1;
    while(1){
        if(p->data==x){
            return cnt;
        }else{
            p=p->next;
            cnt++;
        }
    }
}

//遍历并显示
void display(Node* head){
    //head是头结点，所以head->next是第一个节点
    //这一点与无头结点的链表不一样
    //无头结点的链表head指的就是第一个结点
    Node* p=head->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
