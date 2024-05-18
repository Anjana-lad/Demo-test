//multiple inheritance
#include<iostream>
using namespace std;
class A{
  public:
    int display(){
        cout<<"A is called"<<endl;  
    }
};
class B{
    public:
    int display(){
        cout<<"B is called"<<endl;
    }
};
class C :public A,public B{
    public:
    int show(){
        A ::display();
        B::display();
        cout<<"C is called"<<endl;
    }
};
int main(){
    C cc;
    cc.show();
}