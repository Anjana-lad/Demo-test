//inline function : inline datatype function name(parameter){return st;}
#include<iostream>
using namespace std;
inline int cube(int side){return (side*side*side);}
int main(){
    int num;
    cout<<"enter num";
    cin>>num;
    cout<<"Dynamic Cube function: "<<cube(num)<<endl;
    cout<<" static Function : "<<cube(5)<<endl;
}