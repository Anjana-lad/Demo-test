//switch case vowel 
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character:";
    cin>>ch;
    switch(ch){
        case 'a':
            cout<<"A"<<endl;
            break;
        case 'e':
            cout<<"E "<<endl;
            break;
        case 'i':
            cout<<"I "<<endl;
            break;    
        case 'o':
            cout<<"O "<<endl;
            break;
        case 'u':
            cout<<"U"<<endl;
            break; 
        default:
            cout<<"it is a consonants."<<endl;       
            break;
    }
}