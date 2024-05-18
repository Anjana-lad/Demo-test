//Local class 
#include<iostream>
#include<string>
using namespace std;
int main(){
       class student{
         public:
           int roll_no;
           string name;
        public:
           void get_data(){
            cout<<"Enter roll_no";
            cin>>roll_no;
            cin.ignore();
              cout<<"Enter name:";
            getline(cin, name);
           }   
           void display(){
              cout<<"Name : "<<name<<endl;
              cout<<"Roll_no: "<<roll_no<<endl;
           }
       };  
    student st;
    st.get_data();
    st.display();     
}