#include<iostream>
#include<cstdio>
#include<string>

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
    int sum=0;
    int index=0;
    for(int i=0;i<n;i++){
        scanf("%s",&stu[i].xuehao);
        scanf("%s",&stu[i].name);
        scanf("%d",&stu[i].cn);
        scanf("%d",&stu[i].ma);
        scanf("%d",&stu[i].en);

        if(sum<stu[i].cn+stu[i].en+stu[i].ma){
           sum=stu[i].cn+stu[i].en+stu[i].ma;
           index=i;
        }

    }
    printf("%s %s %d %d %d\n",
           stu[index].xuehao,stu[index].name,
           stu[index].cn,stu[index].ma,stu[index].en);
    return 0;
}
