//file handling:
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int rollno,marks;
    string name;
    cout<<"Enter rollno:";
    cin>>rollno;
    cout<<"Enter marks:";
    cin>>marks;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin,name);
  //for createing a new text file 

    ofstream fout("G:\\batch830-10\\test\\c++ Program\\st2.txt");
   // fout data passing to the specified path
     fout<<"Rollno:"<<rollno<<endl;
     fout<<"Marks: "<<marks<<endl;
     fout<<"Name:"<<name<<endl;
      cout<<"data entered successfully."<<endl; 
    fout.close();
    //to read the given data to the file.
    ifstream fin("G:\\batch830-10\\test\\c++ Program\\st.txt");
    fin>>rollno;
    fin>>marks;
    fin>>name;
    cout<<"data entered successfully."<<endl;
}