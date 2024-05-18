//multilevel inhertance
#include<iostream>
using namespace std;
class Animal{
   public:
   void eat(){
    cout<<"eat function is called."<<endl;
   }
};
class dog:public Animal{
   public:
   void bark(){
    cout<<"Dog is barking"<<endl;
   }
};
class baby_dog:public dog{
     public:
      void cry(){
        bark();
        cout<<"Baby_dog  is crying"<<endl;
      }
};
int main(){
    baby_dog dg1;
    dg1.eat();
    dg1.cry();
}