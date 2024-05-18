//Single inheritance:
//parent class :base class,super class && child class : derived class,sub class
#include<iostream>
using namespace std;
class Parent {
    public:
    int id;
    int age;
    public:
    void Data(){
        cout<<"Enter id and age:";
        cin>>id>>age;
    }
    void show(){
        cout<<"Id:"<<id<<endl<<"Age:"<<age<<endl;
    }
};
//syntax:class child clname:public parentclassname{};
class Student:public Parent{ 

};
int main(){
    Student st;
    st.Data();
    st.show();
}