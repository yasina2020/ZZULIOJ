#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

void ringShift(int *a, int n, int k)
{
    int b[n];
    for(int i=0;i<n;i++){
        b[(i+k)%n]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}

int main(){
    int n,k;
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    ringShift(arr,n,k);

    for(int i=0;i<n;i++){
        if(i!=n-1)
            printf("%d ",arr[i]);
        else
            printf("%d",arr[i]);
    }
    return 0;
}
