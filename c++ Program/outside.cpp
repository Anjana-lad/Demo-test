//Defining the member function outside the class.
#include<iostream>
#include<string>
using namespace std;
class Person{
     public:
     int p_id; //data member
     string name;
     void get_data(); // declare member function
     void show_data(); // 
};
void Person::get_data(){
    cout<<"Enter name and id:";
    getline(cin, name); //for long string
    cin>>p_id;
    //getline(cin,name);
}
void Person::show_data(){
    cout<<"Name:"<<name<<"\n"<<"p_id:"<<p_id<<endl;
}
int main(){
    Person P1;   //object
    P1.get_data();
    P1.show_data();
}