// C++ code to demonstrate
// the working of setprecision() function
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;
int main(){
	// Initializing the decimal
	double num = 3.1484725;
	cout << fixed;
	cout << "Before setting the precision: \n"<< num << endl;
	// Using setprecision()
	cout << "Setting the precision using"<< " setprecision to 5: \n"<< setprecision(5);
	cout << num << endl;
	// Using setprecision()
	cout << "Setting the precision using"<< " setprecision to 9: \n"<<setprecision(9);
	cout << num << endl;
	return 0;
}