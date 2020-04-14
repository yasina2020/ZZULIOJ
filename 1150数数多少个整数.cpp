#include<iostream>
#include<cstdio>
#include<cstring>
//
//using namespace std;
//
//int main(){
//    char ch,arr[1000];
//    int cnt=0;
//    int i=0;
//    int k;
//    while(scanf("%c",&ch)){
//        if(ch<='9'&&ch>='0'){//if is number
//            arr[i]=ch;         // printf("if:%c--",arr[i]);
//            i++;
//
//        }else{
//            if(i!=0){
//            //find the index of first number not 0
//           for( k=0;k<=i;k++){
//              //  printf("else:%c--",arr[k]);
//                if(arr[k]=='0')
//                    cnt++;
//                else
//                    break;
//           }
//           if(k!=i)
//                cnt = cnt + 1;
//            i=0;
//            }
//        }
//        if(ch=='\n')
//            break;
//    }
//    printf("%d\n",cnt);
//    return 0;
//}

int main(){
	char buf[1000];
	int count = 0;
	int flag = 0;
	gets(buf);

	for (int i = 0; i < strlen(buf); i++)
	{
		if (isdigit(buf[i]) && flag==0)  //正常的统计 eg:12345这种
		{
			if (buf[i]=='0'&&isdigit(buf[i+1]))  //特殊情况 010
			{
				count++;
				flag = 0;
				continue;
			}
			count++;
			flag = 1;
		}
		if (!isdigit(buf[i]))
		{
			flag = 0;
		}
	}


	printf("%d\n", count);

}
