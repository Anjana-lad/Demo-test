//runtime polymorhism
#include<iostream>
using namespace std;
class A{
   public:
    void show(){
    cout<<"\n This is class a";
  }
};
class B:public A{
    public:
    void show(){
        cout<<"\n this is class b";
    }
};
int main(){
    B b;
    b.show();
    A* prt; //method1
   prt=&b; 
   prt->show();
    //b.A::show();// method 1
    // A *ptr= new B(); //Method 2
    // ptr->show();//method 2
    //b.show();
}