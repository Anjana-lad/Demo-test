#include<iostream>
using namespace std;
class Teacher{
public:
     string name ;
     string stream;
     public:
     Teacher(string name,string stream){
        this->name=name;
        this->stream=stream;
     }
};
class student{
   public:
    Teacher *teacher;   //Has-A relationship
    public:
    int id;
    string stname;
    public:
    student(int id,string stname,Teacher *teacher){
        this->id=id;
        this->stname=stname;
        this->teacher=teacher;
    }
    void getdata(){
        cout<<"Enter teacher name:";
        getline(cin,teacher->name);
        cout<<"Enter stream";
          cin.ignore();
        getline(cin,teacher->stream);
        cout<<"Enter student id:";
        cin.ignore();
        cin>>id;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin,stname);
    }
    void display(){
        cout<<"Details"<<endl;
        cout<<"Student id:"<<id<<endl;
        cout<<"Student name:"<<stname<<endl;
        cout<<"Teacher name: "<<teacher->name<<endl;
        cout<<"Teacher stream: "<<teacher->stream<<endl;
    }
};
int main(){
    int id;
    string name,stream,stname;
    Teacher t1=Teacher(name,stream);
    student st(id,stname,&t1);
    st.getdata();
    st.display();
}