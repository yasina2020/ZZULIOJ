#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int size_int(int x){
    int len;

    if (x==0)
        return 1;
    for(len=0;x!=0;len++){
        x = x / 10;
    }
    return len;
}

int jude(int x,int y){
    int len=size_int(x);
   // printf("x=%dy=%d\n",x,y);
    int strx[10]={0};
    int stry[10]={0};
    for(int i=0;i<len;i++){
        strx[x%10]++;
        x=(x-x%10)/10;
        //printf("x%10=%d--",x);
        stry[y%10]++;
        y=(y-y%10)/10;
        //printf("y%10=%d\n",y);

    }
    int fflat=0;
    for(int i=0;i<10;i++){
        //printf("%d---%d-%d\n",i,strx[i],stry[i]);
        if(strx[i]==stry[i])
            continue;
        fflat=1;
    }
    //printf("fflat==%d\n\n",fflat);
    if(fflat==0)//相同
        return 1;
    return 0;//不相同
}
int main(){
    int n;
    while(scanf("%d",&n),n!=0){
        int arr[n];
        int flat[n];
        memset(flat,0,sizeof(flat));
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        sort(arr,arr+n);//按排序

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(size_int(arr[i])==size_int(arr[j])&&flat[j]==0){//只有位数相同时,没有被标记的，才有可比性
                    if(jude(arr[i],arr[j])) {//==1代表相同
                        flat[i]=1;
                        flat[j]=1;
                    }//falt[i]==1表示重复，不输出
                }else{
                    break;
                }
            }
        }

        int flatt=0;
        for(int i=0;i<n;i++){
            if(flat[i]!=1){
                printf("%d ",arr[i]);
                flatt=1;
            }
        }
        if(flatt==0){
            printf("None\n");
        }
    }
    return 0;
}
