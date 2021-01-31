#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
protected:
    string car;
private:
    string passworld;
public:
    void fun(string str){
        name = "zhangsan";
        car = str;
        passworld="123456";
    }

    void show(){
    cout<<name<<car<<passworld<<endl;
    }
};

int main(){
    person p1;
    p1.fun("benchi");
    p1.show();
    cout<<p1.name<<endl;
    return 0;


}
