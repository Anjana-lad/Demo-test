//scope resolution operator: (::)
#include<iostream>
using namespace std;
int p=30; //global
int main(){
    int p=20,num;// local
    cout<<"enter number:";
    cin>>num;
    cout<<"using local variable p:"<<num+p<<endl;
    cout<<"using global variable p:"<<num+::p<<endl;
}