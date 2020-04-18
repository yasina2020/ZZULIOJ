#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
typedef struct{
    char xuehao[13];
    char name[20];
    int cn;
    int ma;
    int en;
}STU;

int main(){
    int n;
    scanf("%d",&n);
    STU stu[n];
    for(int i=0;i<n;i++){
        scanf("%s",&stu[i].xuehao);
        scanf("%s",&stu[i].name);
        scanf("%d",&stu[i].cn);
        scanf("%d",&stu[i].ma);
        scanf("%d",&stu[i].en);
    }

    char chaxun[13];
    scanf("%s",&chaxun);
    int index=0;int f=0;
    for(int i=0;i<n;i++){
        if(strcmp(chaxun,stu[i].xuehao)==0){
            index=i;f=1;break;
        }
    }
    if(f==0)
        printf("Not Found\n");
    else
        printf("%s %s %d %d %d\n",
           stu[index].xuehao,stu[index].name,
           stu[index].cn,stu[index].ma,stu[index].en);
    return 0;
}
