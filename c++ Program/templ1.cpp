// C++ program to show different data types using a
// constructor and template.
#include <iostream>
using namespace std;
template <class T> class info {
public:
	info(T A){
		cout << "\n"<<"A = " << A << " size of data in bytes:" << sizeof(A);
	}
}; 
int main(){
	info<char> p('x');
	info<int> q(22);
	info<double> r(2.25);
}