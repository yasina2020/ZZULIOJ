//法一
//设置一个幸福指数数组，大小为人数，初始0
//对于每一个字符串（即幸福标准）判断是左是右  获取字符串中的数number
//    对符合这一条标准的人的幸福指数+1;
//
//得到一组幸福指数数组，遍历指数最高的有几个；
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool cmp(int x,int y){
//    return x>y;
//}
//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        int arr[n];//标记幸福指数
//        memset(arr,0,n);
//        string str;
//        for(int i=0;i<m;i++){
//            gets(str);
//            int len=strlen(str);
//            int brr=0;//存str中的数
//            if(str[7]=='l'){//left
//                for(int j=0;j<len-15;j++){
//                    brr = brr*10 + str[j+15]-'0';
//                }
//                for(int k=0;k<brr-1;k++)//给left几个人幸福+1
//                    arr[k]++;
//            }else if(str[7]=='r'){//right
//                for(int j=0;j<len-16;j++){
//                    brr = brr*10 + str[j+16]-'0';
//                }
//                for(int k=n-1;k>brr-1;k--)//给right几个人幸福+1
//                    arr[k]++;
//            }
//        }
//
//        int cnt=0;
//        sort(arr,arr+n,cmp);
//        for(int i=0;i<n;i++){
//            if(arr[i]!=arr[i+1]){
//                cnt++;
//                break;
//            }
//            cnt++;
//        }
//        printf("%d\n",cnt);
//    }
//    return 0;
//}
/*
法二
对区间内数字进行修改，所以可以用差分来做；
    先求出差分数组，再求前缀和即是原数组，
        统计原数组中个数等于m的数量，输出即可
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
const int N = 1e3 + 10;
int a[N], b[N];
int get_num(string a)  // 得到数字
{
	int sum = 0;
	int len = a.size();
	for(int i = 0; i < len; i++)
		sum = sum * 10 + a[i] - '0';
	return sum;
}
int main(){
	int t;
	cin >> t;
	while (t--)
	{
		memset(a, 0, sizeof a);    //清空差分数组
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= m; i++)
		{
			int flag = 0;
			string s;
			for(int i= 1; i <=5; i++)   //每一次的条件都是五个单词
			{                          //所以可以分五次输入
				cin >>s;
				if(s == "left")    //如果是left的情况
					flag = 1;
			}
			int num = get_num(s);    //得到范围
			if(flag == 1)
				a[1]++, a[num]--;
			else
				a[num + 1]++;
		}
		int cnt = 0;
		for(int i = 1; i <= n; i++)
			b[i] = b[i - 1] + a[i];
		for(int i = 1; i <= n; i++)        //统计数字为m的
			if(b[i] == m)
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}
