// categories of function:
// 1. no argument no return;
// 2.no arument with return;
// 3. with argument no return;
// 4.with argument with return;
#include<stdio.h>
void sum(){  
    int a,b,res;
    printf("enter number:");
    scanf("%d %d",&a,&b);
    res=a+b;
    printf("res:%d",res);
}

int main(){
    sum();
   }


