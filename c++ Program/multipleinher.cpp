//multiple inheritance we have 2 base class and its one child class.
#include<iostream>
using namespace std;
class shape{
protected:
int width,height;
public:
void get_data(int w,int h){
    width=w;
    height=h;
}
};
class Cost{
    public:
    int area;
    public:
        int show(int area){
            return area*50;
    }
};
class Rectangle:public shape,public Cost{
         public:
           int area(){
           return width*height;
           }
};
int main(){
    Rectangle r1;
    r1.get_data(12,7);
    int a=r1.area();
     cout<<"Area is:"<<a<<endl;
     cout<<"Cost="<<r1.show(a)<<endl;
}