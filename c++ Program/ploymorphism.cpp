//polymorsphism =poly means many morphism means form
//Compile TIME function overloading
#include<iostream>
using namespace std;
int fun_1(int a,int b){
   int res=a+b;
   cout<<"Result is:"<<res<<endl;
}
int fun_1(double a, double b){
    double res=a+b;
    cout<<"res:"<<res<<endl;
}
int fun_1(int a,int b,int c){
    int res=a+b+c;
    cout<<"resl="<<res<<endl;
}
int main(){
    fun_1(12,15);
    fun_1(1,2);
    fun_1(1.2,3.5);
}