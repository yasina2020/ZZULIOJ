#include "stdio.h"
int table[2][13]={
{0,31,28,31,30,31,30,31,31,30,31,30,31},
{0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int isleapyear(int year){
    return year%4==0&&year%100||year%400==0;
}

int main(){
    int time1,time2,y1,y2,m1,m2,d1,d2;
    while(scanf("%d%d",&time1,&time2)!=EOF){
        int cnt=1;
        if(time1>time2){
            int temp;
            temp = time1; time1 = time2; time2 = temp;
        }
        y1=time1/10000;m1=time1%10000/100;d1=time1%100;
        y2=time2/10000;m2=time2%10000/100;d2=time2%100;
        //ÅÐ¶ÏºÏ·¨ÐÔ

        //tian shu
        while(y1<y2||m1<m2||d1<d2){
            d1++;

            if(d1 == table[isleapyear(y1)][m1] + 1){
                m1 ++;
                d1 = 1;
            }
            if(m1 == 13){
                y1 ++;
                m1 = 1;
            }
            cnt ++;
        }

        printf("%d\n",cnt);
    }
    return 0;
}

