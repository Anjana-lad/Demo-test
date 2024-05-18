//diamond problem
#include<iostream>
using namespace std;
class P{
    protected:
    int a;
    public:
    int get_a(){
    cout<<"Enter value of a:";
    cin>>a;
    }
};
class Q : virtual public P{
    protected:
    int b;
    public:
    int get_b(){
    cout<<"Enter value of b:";
    cin>>b;
    }

};
class R:virtual public P{
    protected:
    int c;
    public:
    int get_c(){
    cout<<"Enter value of c:";
    cin>>c;
    }
};
class S:public Q,public R{
    public:
    int result(){
        get_a();
        get_b();
        get_c();
     int m=a+b+c;
     cout<<"Result is:"<<m;
    }
};
int main(){
    S s;
    s.result();
}