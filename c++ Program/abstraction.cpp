//data Abstraction 
#include<iostream>
using namespace std;
class student{
    private:
    int id;
    string name;
    public:
    void get_data(){
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Id:"<<id;
    }
};
int main(){
    student st;
      st.get_data();
    st.display();
}