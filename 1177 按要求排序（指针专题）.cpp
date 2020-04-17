#include<iostream>
#include<cstdio>
#include<cstring>
#include <algorithm>
using namespace std;

void sort(int a[], int n, int (*cmp)());
int CmpAsc(int x, int y); /*按升序要求判断两元素是否逆序*/
int CmpDec(int x, int y); /*按降序要求判断两元素是否逆序*/
int CmpAbsAsc(int x, int y);  /*按绝对值升序要求判断两元素是否逆序*/

int main(void)
{
   int a[10],i,n;
   int slt;

 /*读入n和n个整数，存入数组a*/
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
   /*读入用户的选择，存入slt; */
    scanf("%d",&slt);

    switch(slt)
   {
     case 1:   sort(a,a+ n, CmpAsc); break;
     case 2:   sort(a, a+n, CmpDec); break;
     case 3:   sort(a, a+n, CmpAbsAsc);break;
   }

   /*输出排序后的数组*/
    for(int i=0;i<n;i++){
        if(i!=n-1)
            printf("%d ",a[i]);
        else
            printf("%d\n",a[i]);
    }
    return 0;
   }

//void sort(int a[], int n, int (*cmp)())
//{
// /*对数组a排序，排序原则由cmp指定，若cmp为真，表示两元素逆序*/
//for(int )
// }

int CmpAsc(int x, int y)//1s
{
 //如果x>y返回1，否则返回0；
 if(x<y) return 1;
 else return 0;

}

int CmpDec(int x, int y)//2j
{
 //如果x<y返回1，否则返回0；
  if(x>y) return 1;
 else return 0;
}

int CmpAbsAsc(int x, int y)//3s
{
//如果abs(x)>abs(y)返回1，否则返回0
 if(abs(x)<abs(y)) return 1;
 else return 0;
}
