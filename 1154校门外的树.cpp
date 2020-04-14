#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int l,m;
        scanf("%d %d",&l,&m);
        //用筛选法 tree[i]=0有树 等于1没树
        int tree[l];
        memset(tree,0,sizeof(tree));
        while(m--){
            int a,b;
            scanf("%d %d",&a,&b);
            for(int i=a;i<=b;i++){
                if(tree[i]==0)//如果有树
                    tree[i]=1;//把树刨了
            }
        }
        //统计还有几棵树
        int cnt=0;
        for(int i=0;i<l;i++){
            if(tree[i]==0)
                cnt++;
        }
        printf("%d\n",cnt+1);
    }
    return 0;
}
