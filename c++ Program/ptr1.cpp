// #include<iostream>
// using namespace std;
// class Rectangle{
// 	private:
//  		int length;
//  		float breadth;
//  	public:
//  		void setData(int l, int b){
//  			length=l;
//  			breadth=b;
// 		}
//  		int getArea(){
//  			return 2*length*breadth;
// 		}
// };
// int main(){
//   Rectangle var[2]; 
//   var[0].setData(5,2);
//   var[1].setData(3,2);
//   Rectangle* ptr;
//   ptr = var;
//   for(int i=0;i<2;i++){
//  	cout<<"Area of Rectangle"<<(i+1)<<" : "<<(ptr+i)->getArea()<<endl;
//   }
//  return 0;
// }
//
#include<iostream>
using namespace std;
class Rectangle{
private:
    int length;
    float breadth;
public:
    void setData(){
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    int getArea(){
        return length * breadth;
    }
};
int main() {
    Rectangle var[2];
    for (int i = 0; i < 2; i++) {
        cout << "Enter data for Rectangle " << (i + 1) << endl;
        var[i].setData();
    }
    Rectangle* ptr;
    ptr = var;
    for (int i = 0; i < 2; i++) {
        cout << "Area of Rectangle " << (i + 1) << " : " << (ptr + i)->getArea() << endl;
	}
    return 0;
}