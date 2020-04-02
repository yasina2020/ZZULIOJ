#include "stdio.h"

int table[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int Isleapyear(int year)
{
    return (year%4==0&&year%100!=0)||(year%400==0);
}

int main(){
    int year,month,day;
    scanf("%d-%d-%d",&year,&month,&day);
    int row=Isleapyear(year),sum_day=0;
    //printf("%d\n",row);
    for(int i=0;i<month;i++)
    {
        sum_day += table[row][i];
    }
    sum_day +=day;

    printf("%d\n",sum_day);

    return 0;

}
