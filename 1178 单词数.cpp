#include<stdio.h>
#include<string.h>
int main(){
    char a[300001],b[100][31],c[100];
    int i,t,j=0,k=0,q=0,w=0,m,n;
    gets(a);
    while(1){
        memset(b,0,sizeof(b));
        t=0;j=0;k=0;
        if(strcmp(a,"#")==0) break;

        for(i=0;i<strlen(a);i++){
                //单词存到b中
            if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
                b[j][k++]=a[i];
                //若ai字母，ai+1是空格或者结尾符，表明这个单词存完了
            if(a[i]>='A'&&a[i]<='Z'&&a[i+1]==' '
               ||a[i]>='a'&&a[i]<='z'&&a[i+1]==' '
               ||a[i]>='a'&&a[i]<='z'&&a[i+1]=='\0'
               ||a[i]>='A'&&a[i]<='Z'&&a[i+1]=='\0'){
                   j++;k=0;
            }
        }
        //至此，该字符串中的所有单词都存到了二维数组b中

        m=j;
        for(i=0;i<m-1;i++)
            for(j=0;j<m-i-1;j++)
                if(strcmp(b[j],b[j+1])>0) {
                    strcpy(c,b[j]);
                    strcpy(b[j],b[j+1]);
                    strcpy(b[j+1],c);
                } //冒泡排序 将二维数组b中的单纯按升序排列   方便统计不同单纯的个数。
        for(i=0;i<m;i++)
            if(strcmp(b[i],b[i+1])!=0) t++;   //统计不同单纯的个数
        printf("%d\n",t);
        gets(a);
    }
    return 0;
}
