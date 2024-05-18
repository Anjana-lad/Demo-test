//hybrid Inheritance
#include<iostream>
using namespace std;
int p,q,r,s;
class P{ 
     public:
     int get_pq(){
        cout<<"Enter the value of p:";
        cin>>p;
        cout<<"Enter the value of q:";
        cin>>q;
     }
};
class Q:public P{
    public:
    int get_r(){
        cout<<"Enter the value of r:";
        cin>>r;
    }
};
class R{
    public:
    int get_s(){
        cout<<"Enter the value of s:";
        cin>>s;
    }
};
class S:public Q,public R{
     public:
     int result(){
        get_pq();
        get_r();
        get_s();
        int res=p+q+r+s;
        cout<<"the result is:"<<res<<endl;

     }
};
int main(){
    S s;
    s.result();
}