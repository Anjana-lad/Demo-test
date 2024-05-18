//nested class 
#include<iostream>
#include<string>
using namespace std;
class A{
   public:
     string name; 
   class B{
       private:
        int num;
          public:
     void get_data(int n){
                 num=n;
            }  
    void show_data(){
        cout<<"\n The value of number is:"<<num<<endl;
    }
   };
   void show(){
        cout<<"Enter name:";
         getline(cin, name);
         cout<<"Name:"<<name;
   }
}ob;
int main(){
     A::B obj;  //object
     ob.show();
    obj.get_data(200);
    obj.show_data();
}