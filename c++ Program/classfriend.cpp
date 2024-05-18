//program friend class
// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;
// forward declaration
class ClassB;
class ClassA {
    private:
        int numA;
        friend class ClassB;
    public:
         ClassA(int numA){
        numA=12;
        } 
        // ClassA() : numA(12) {}
};
class ClassB {
    private:
        int numB;
    public:
        // constructor to initialize numB to 1
      
        ClassB( int numB){
            numB=1;
        }
     int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};
int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}