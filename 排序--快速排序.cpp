#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[100];

int Partition(int left,int right){
    //1 随机选择一个值
    int random = left + rand() % (right - left);
    //2 将随机选择的值与left换一下
    swap(arr[left],arr[random]);
    //3 将那个随机值作为基准，比基准大的放在右边，比基准小的放在左边
    while(left<right){
        while(left<right&&arr[left]<=arr[right]){
            right--;
        }

        swap(arr[left],arr[right]);
        while(left<right&&arr[left]<=arr[right]){
            left++;
        }

        swap(arr[left],arr[right]);
    }
    return left;//返回下标
}

void QuickSort(int left,int right){
    if(left<right){
        int position = Partition(left,right);
        //经过Partition之后 能确定arr[position]在正确的位置；
        QuickSort(left,position-1);
        QuickSort(position+1, right);
    }

}

//int QuickSort(int left,int right,int k){
//        int position = Partition(left,right);
//        if(position == k-1){
//            return position-1;
//        }else if(position < k-1){
//            return QuickSort(position+1,right,k);
//        }else{
//            return QuickSort(left,position-1,k);
//        }
//}


int main(){
    int n;

//
//    int k;
//    scanf("%d",&k);


    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

//    k = QuickSort(0,n-1,k);
//        printf("%d ",arr[k]);

    QuickSort(0,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
//4
//4 3 2 1
