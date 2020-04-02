#include "stdio.h"
int a[1000000],b[1000000];
/*栈内存，系统默认值为最大1Mb，
最大可以申请1024*1024/4=264144个，堆栈溢出
方法一：申明为全局变量  方法二：存放在堆上*/
int main()
{
    int m,n,i,j,k=0;

    scanf("%d",&m);
    for(i=m-1;i>=0;i--)//将a[i]倒序排列
    scanf("%d",&a[i]);
    scanf("%d",&n);
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);

    int c[m+n],s=0,t=0;
    while(s<m&&t<n)//两数组共有长度
    {
        if(a[s]>=b[t])
        c[k++]=a[s++];
        else c[k++]=b[t++];
    }

    while(s<m)//a数组长度长，多余部分
    c[k++]=a[s++];
    while(t<n)//b数组长度长，多余部分
    c[k++]=b[t++];

    for(k=0;k<m+n-1;k++)
    printf("%d ",c[k]);
    printf("%d",c[m+n-1]);
    return 0;
}
