//constructor is a special member function,which have same name as class name.
//It do not have any data type,its is overloaded. it is used to allocate the memory.
//Its is called automatically when object is created of class.
//# Types of constructor 1.default constructor
//2.parameterized constructor 3. Copy constructor
#include<iostream>
using namespace std;
class Points{
    public:
    int singing,dance;  //data member
    public:
    Points(){   // default constructor
        singing=15;
        dance=30;
        cout<<"Singing"<<singing<<endl<<"Dance:"<<dance<<endl;
    }
};
int main(){
   Points p;  //object created
}