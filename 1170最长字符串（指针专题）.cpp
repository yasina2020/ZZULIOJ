#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int lenx;

void maxLenStr(char *str,int n,char *maxx)
{
   // printf("lenx=%d++n=%d\n",lenx,n);
    if(lenx<n){
        lenx=n;
        strcpy(maxx,str);
    }
//从字符串数组str中找出最长的一个字符串，
//并将其下标存入形参指针max所指内存。
}
//如果想存储一堆字符串可以使用字符串数组，字符串数组就是二维数组
int main(){
    char str[105];
    char maxx[105];
    gets(str);
    lenx=strlen(str);
    //printf("lenx=%d\n",lenx);
    strcpy(maxx,str);
    //printf("%s--%s\n",str,maxx);
    int n;

    while(gets(str),strcmp(str,"****")!=0){
        n=strlen(str);
        //printf("%s\n",str);
        maxLenStr(str,n,maxx);
    }
    printf("%s\n",maxx);
    return 0;
}
//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//void maxLenStr(char *str[], int n, int *max)
//{
//	int m=0;
//	for(int i=0;i<n;i++)
//	{
//		if(strlen(str[i])>m)
//		m=strlen(str[i]),*max=i;
//	}
//}
//从字符串数组str中找出最长的一个字符串，
//并将其下标存入形参指针max所指内存。
//int main()
//{
//	int i=0,index;
//	char *a[101],s[101];
//	while(1)
//	{
//		getline(cin,s);
//		if(strcmp(s,"****")==0) break;
//		else
//		{
//			a[i]=(char*)malloc(sizeof(char)*(strlen(s)+1));
//			strcpy(a[i],s);
//			i++;
//		}
//	}
//	maxLenStr(a,i,&index);
//	cout<<a[index];
//}
