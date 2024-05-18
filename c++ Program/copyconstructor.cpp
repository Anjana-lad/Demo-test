//copy constructor Syntax:classname(const classname &obj)
#include<iostream>
using namespace std;
class Value{
     private:
     int  a,b;
     public:
     Value(int a1,int b1){  //parameterized constructor
      a=a1;
      b=b1;
     }
     Value(const Value &v2){   //copy constructor
     a=v2.b;
     b=v2.a;
     }
     void display(){ 
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
     }
};
int main(){
    int a,b;
    cout<<"Enter the value of a and b :";
    cin>>a>>b;
    Value v1(a,b);  //object of parameter constructor 
    v1.display();
    cout<<"After swapping"<<endl;
    Value v2=v1;    //v2 copy constructor
    v2.display();
}