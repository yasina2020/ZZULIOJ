#include <stdio.h>
#include <stdlib.h>
/*思路：
花瓣数肯定为奇数时，才会出现“爱”
1.sum为奇数，则证明这就是最大的数，直接输出
2.sum为偶数是有两种可能：1、全偶数组成。这种可能就可以直接输出零了  2、偶奇数组成，减去最小的奇数，输出结果
*/
int main()
{
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int min = 102,sum=0;
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            sum+=a[i];
            if(a[i]%2!=0&&a[i]<min)
                min = a[i];
        }

        if(sum %2 != 0)
            printf("%d\n",sum);
        else if(min==102)
            printf("0\n");
        else
            printf("%d\n",sum-min);

    }
    return 0;
}
