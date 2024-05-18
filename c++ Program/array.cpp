//array
#include<iostream>
using namespace std;
int main(){
    int arr[20];
    cout<<"enter number:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"print array:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}