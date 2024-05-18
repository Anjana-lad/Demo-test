//parameterized constructor
#include<iostream>
using namespace std;
class cube_fun{
    private:
    int side,cube;   //data member
    public:
    cube_fun(int side1){   //parameterized constructor
        side=side1;
    }
    int display(){    //member function
        cube=side*side*side;
        cout<<"Cube :"<<cube<<endl;
    }
};
int main(){
    int a;
    cout<<"Enter the value:";
    cin>>a;
    cube_fun cf(a);
    cf.display();
}