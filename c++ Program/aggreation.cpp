#include <iostream>  
using namespace std;  
class Address {  
    public:  
   string addressLine, city, state;    
     Address(string addressLine, string city, string state)    
    {    
        this->addressLine = addressLine;    
        this->city = city;    
        this->state = state;    
    }   
};  
class Employee    
    {    
        private:  
        Address* add;  //Employee HAS-A Address   
        public:  
        int id;    
        string name;    
        Employee(int id, string name, Address* address)    
       {    
           this->id = id;    
           this->name = name;    
           this->add = address;    
       }    
     void display()    
       {    
           cout<<"ID:"<<id <<endl<<"name:"<<name<<endl<<"AddressLine: "<<    
             add->addressLine<<endl<<"City :"<< add->city<<endl<<"State:"<<add->state<<endl;    
       }    
   };   
int main() {  
    Address a1= Address("C-146, Sec-15","Noida","UP");    
    Employee e1 = Employee(101,"Nakul",&a1);    
     e1.display();   
   return 0;  
}