//Encapsulation:
#include<iostream>
using namespace std;
class Person{
   private:
    int id;  //data member
    string name;
    public:
    int get_data(int pid,string nm){   //member function
        id=pid;
        name=nm;
    }
    int display(){   //member function
        cout<<"Id: "<<id<<endl<<"Name= "<<name<<endl;
    }
};
int main(){
    Person p1,p2; //classname objectname;
    p1.get_data(102,"Harsh");
    p1.display();
    p2.get_data(103,"Dipak");
    p2.display();
}