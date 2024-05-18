//friend function 
#include<iostream>
using namespace std;
class Priyank;
class Harsh{
   private:
   int money=500;
   public:
   friend int Rishabh(Harsh,Priyank);
};
class Priyank{
    private:
     int money=300;
     public:
    friend int Rishabh(Harsh,Priyank);
};
int Rishabh( Harsh h,Priyank p){
    int res=h.money+p.money;
    cout<<"The result is:"<<res<<endl;
}
int main(){
    Harsh h1;
    Priyank p1;
    Rishabh(h1,p1);
}