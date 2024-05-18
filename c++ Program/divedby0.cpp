//number divide by zero;
#include<iostream>
using namespace std;
int main(){
    int x,y,z,res;
    cout<<"Enter numbers:";
    cin>>x>>y>>z;
    try{ 
        if(z!=0){
            res=(x-y)/z;
            cout<<"Result is:"<<res<<endl;
        }
        else{
            throw(z);
        }
    }
    catch(int z){
        cout<<"The denominator can't be zero."<<endl;
    }
}