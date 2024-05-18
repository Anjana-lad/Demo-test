#include <iostream> 
using namespace std;
class Box {
    private:
      double length;     
      double breadth;    
      double height;  
   public:
      Box(double l , double b , double h ) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume() {
         return length * breadth * height;
      }
};
int main(void) {
   Box Box1(3.3, 1.2, 1.5);    // object  box1
   Box Box2(8.5, 6.0, 2.0);    // object box2
   Box *ptrBox;                // pointer to a class.
   ptrBox = &Box1;
   cout << "Volume of Box1: " << ptrBox->Volume() << endl;
   ptrBox = &Box2;
   cout << "Volume of Box2: " << ptrBox->Volume() << endl;
   return 0;
}