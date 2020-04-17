#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

//二维指针数组

void find(char *name[], int n, int *p)
{
    int i;
    for(i=0;i<n;i++){
        if(strcmp(name[i],name[*p])>0)
            *p=i;
    }
//在包含n个字符串的二维字符数组name中，
//查找值最大的字符串，将其下标存入指针p所指内存单元
}



int main(){
    char str[7];
    char *name[100];
    int i;
    for(i=0;;i++){
        scanf("%s",&str);
        if(strcmp(str,"*****")==0)
            break;
        else {
            name[i]=(char*) malloc(sizeof(char) * (strlen(str)+1));
            strcpy(name[i],str);
        }
    }
    int index=0;
    find(name,i,&index);
    printf("%s\n",name[index]);
    return 0;
}
