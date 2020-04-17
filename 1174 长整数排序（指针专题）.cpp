#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
/*若s1指向的整数大于s2指向的整数，返回一个正整数;
若s1指向的整数小于s2指向的整数，返回负整数;
若s1指向的整数等于s2指向的整数，返回0;*/
int a_greater(char *s1, char *s2)
{

    int len1=strlen(s1);
    int len2=strlen(s2);
    if(len1>len2)
        return 1;
    if(len1<len2)
        return -1;
    if(len1==len2){
        for(int i=0;i<len1;i++){
            if(s1[i]>s2[i]){
                return 1;
            }
            if(s1[i]<s2[i]){
                return -1;
            }
        }
    }
    return 0;
}

char *del(char *str)//去掉前导0
{
    char *ch=str;
    int i=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i+1]=='\0')
            break;//当输入为零时，使其输出0
        if(str[i]!='0')
            break;
    }

    ch=&str[i];//从第i个开始不是0；
    return ch;
}


int main(){
    int n;
    char *str=NULL;
    char *p[15];
    scanf("%d",&n);
    getchar();
//-----------------------------------------------------
    char *temp=NULL;
    char cparr[105];
//------------------------------------------------------------
    for(int i=0;i<n;i++){
        gets(cparr);
        str=del(cparr);
        p[i]=(char*) malloc( sizeof(char) * (strlen(str) + 1));
        strcpy(p[i],str);
        //printf("%s\n",p[i]);
////----------------------------------------------------------
//
//          int k=0;
//          if(arr[i][k]=='0'){
//            while(arr[i][k]=='0'){
//                k++;
//            }//找到第k个下标不是零
//            for(int j=0;k<strlen(arr[i]);k++,j++){
//                cparr[j]=arr[i][k];
//            }
//            cparr[k]='\0';
//            printf("len %d\n",strlen(arr[i]));
//            strcpy(arr[i],cparr);
//
//             printf("len %d\n",strlen(arr[i]));
//        }
//
    }
//---------以上接收并去掉前导‘0’-----------------------------------
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a_greater(p[i],p[j]) > 0){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
//-----冒泡排序---------------------------------------------------
    for(int i=0;i<n;i++){
        printf("%s\n",p[i]);
    }
//------------------输出---------------------------------------------
    return 0;
}
