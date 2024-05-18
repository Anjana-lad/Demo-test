//destructor : same name as constructor but it has a tilde(~) sign before its name;
//it is used to free the memory which is allocated by the constructor.
#include<iostream>
using namespace std;
class add_fun{
     private:
     int x,y,z;
     public:
     add_fun(int a,int b){  //constructor
        x=a;
        y=b;   
     }
     void display(){
        int res;
        res=z;
        z=x+y;
        cout<<"The sum is:"<<z<<endl;
     }
     ~add_fun(){    //destructor 
        cout<<"Destroy the value"<<endl;
     }
};
int main(){
    add_fun af(15,24);
    af.display();
    cout<<"Calling Destructor"<<endl;
} 