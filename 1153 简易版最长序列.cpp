//#include <stdio.h>
//#include <string.h>
//
//int find_a(int str[],int n){
//
//    //这个方法开的数组太大了
//    //int sub_str[4294967296];
//
//    //用时间换空间试试
//    int maxnum=str[0];
//    for(int i=0;i<n;i++){
//        if(maxnum<str[i])
//            maxnum=str[i];
//    }
//    int sub_str[maxnum];
//
//    memset(sub_str,0,sizeof(sub_str));
//
//    for(int i=0;i<n;i++){
//        sub_str[str[i]]++;
//    }
//
//    int maxn = sub_str[0];
//    for(int i=0;i<n;i++){
//        if(maxn<sub_str[i])
//            maxn=sub_str[i];
//    }
//    return maxn;
//}
//
//int main(){
//    int n,t;
//    scanf("%d",&t);
//    while(t--){
//        scanf("%d",&n);
//        int str[n];
//        for(int i=0;i<n;i++){
//            scanf("%d",&str[i]);
//        }
//        int cnt=find_a(str,n);
//        printf("%d\n",cnt);
//    }
//    return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//
//void paixu(int a[],int n)
//{
//    int i,j,t;
//    for(i=0;i<n-1;i++)
//    {
//        for(j=i+1;j<n;j++)
//        {
//            if(a[i]>a[j])
//            {
//                t=a[i];
//                a[i]=a[j];
//                a[j]=t;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int a[10000],b[10000]={0};
//    int i,j,k,l,m,n,t;
//    scanf("%d",&t);
//    while(t--)
//    {
//        m=0;
//        j=0;
//        memset(b,0,sizeof(b));
//        scanf("%d",&n);
//        for(i=0;i<n;i++)
//            scanf("%d",&a[i]);
//        paixu(a,n);
//        for(i=0;i<n;i++)
//        {
//            if(a[i]==a[i+1])
//                b[j]++;
//            if(a[i]!=a[i+1])
//                j++;
//        }
//        m=b[0];
//        for(i=0;i<n;i++)
//        {
//            if(m<b[i])
//                m=b[i];
//        }
//        printf("%d\n",m+1);
//    }
//    return 0;
//}
//
