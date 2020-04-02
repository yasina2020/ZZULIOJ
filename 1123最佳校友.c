//#include "stdio.h"
//#include <stdlib.h>
//
//int main()
//{
//    int a[101]={0},i,j;
//    while(scanf("%d",&i),i>=0)
//        a[i]++;
//
//    int max=a[0];
//    for(j=1;j<101;j++)
//    {
//        if(a[i]>max)
//            max=a[i];
//    }//找到最大值
//    //在遍历一遍把符合做大值的数下标输出
//    int find=0;//用来控制输出的格式
//    for(j=0;j<101;j++)
//    {
//        if(a[j]==max&&find==0)
//       {
//            printf("%d",j);
//            find=1;
//       }
//        else if(a[j]==max&&find!=0)
//            printf(" %d",j);
//    }
//    return 0;
//}
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[105]= {0};
    int num;
    int max;
    int i;
    int find = 0;
    while(scanf("%d",&num),num>=0)
    {
        a[num]++;

    }
    max = a[0];
    for(i=1; i<105; i++)
    {
        if(max < a[i])
            max = a[i];
    }
    for(i=0; i<105; i++)
    {
        if(a[i] == max && find ==0)
        {
            printf("%d",i);
            find = 1;
        }
        else if(a[i] == max &&find != 0)
            printf(" %d",i);

    }
    return 0;
}
