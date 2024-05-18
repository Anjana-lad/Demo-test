//hierarchial inheritance
#include<iostream>
using namespace std;
class Person{
    public:
    int show(){
        cout<<"Parent Person is called"<<endl;
    }
};
class child1:public Person{
    public:
    int show2(){
        show();
        cout<<"I am child 1"<<endl;
    }
};
class child2:public Person{
    public:
    int display(){
        show();
        cout<<"I am child 2"<<endl;
    }
};
int main(){
     child1 ch1;
     ch1.show2();
     child2 ch2;
     ch2.display();
}