//manipulate function: 1.setw(digit)
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int length=9501258,width=36;
    float percent=98.365471254;
    cout<<"Length="<<setw(5)<<length<<endl;
    cout<<"Width="<<setw(5)<<width<<endl;
    cout<<"Percent="<<setprecision(5)<<percent<<endl;
    cout<<fixed;
    cout<<"percent="<<setprecision(7)<<percent<<endl;
    
}