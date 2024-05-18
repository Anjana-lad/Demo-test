//overloading constructor 
#include<iostream>
using namespace std;
class Rectangle{
     private:
     int width,length;
     public:
     Rectangle();  //default constructor
     Rectangle(int ,int);  //parametrized constructor
     int area(){
        return (width * length);
     }
};
Rectangle::Rectangle(){
    cout<<"Enter the value of width and length";
    cin>>width;
    cin>>length;
    cout<<"width:"<<width<<endl<<"Length:"<<length<<endl;
}
Rectangle::Rectangle(int w,int l){ 
    width=w;
    length=l;
}
int main(){
    Rectangle rect1;  //default constructor;
    Rectangle rect2(12,25); //parameter constructor
    cout<<"The area of default constructor:"<<rect1.area()<<endl;
    cout<<"The area of Parameterized constructor:"<<rect2.area()<<endl;
}