#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
    int t;
    while(scanf("%d",&t)!=EOF){
        int n;
        scanf("%d",&n);
        int arr[n];
        int f=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<n;i++){
            if(arr[i]>=t){
                printf("%d\n",i+1);
                f=1;
                break;
            }
        }
        if(f==0)
            printf("NONE\n");
    }
    return 0;
}
