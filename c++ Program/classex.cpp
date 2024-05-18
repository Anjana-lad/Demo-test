//oops concepts 1 class 
//2.object
//3.Abstraction
//4.Encapsulation
//5.Inheritance
//6.polymorphism
//class syntax:
// class Classname{
//     access modifier:/1.public.2.private 3.protected;
//     data members;
//     public:
//     member function();
// };
#include<iostream>
using namespace std;
class Person{
   private:
    int id;  //data member
    string name;
    public:
    int getdata(int pid,string nm){   //member function
        id=pid;
        name=nm;
    }
    int display(){   //member function
        cout<<"Id: "<<id<<endl<<"Name= "<<name<<endl;
    }
};
int main(){
    Person p1,p2; //classname objectname;
    p1.getdata(102,"Harsh");
    p1.display();
    p2.getdata(103,"Dipak");
    p2.display();
}