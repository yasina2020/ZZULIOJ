#include <iostream>
#include <string>
using namespace std;

int main(){
    int k,m;
    cin>>m>>k;
    int cnt=0;
    for(int x=0;;x++){
        if(m>=k)
            for(int i=0;i<k;i++){
                cnt++;
                m--;
            }else
            {cnt += m;
            break;}

        m++;
    }
    cout<<cnt;
}
