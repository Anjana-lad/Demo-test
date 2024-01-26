#include<stdio.h>
int fact(int f){
   if(f==1){
    return 1;
   }  
   else{
   return f*fact(f-1);
   }
}
int main(){
   int f=5 ;
  // printf("Enter num");
  // scanf("%d",&f);
  // printf("\n Number is:%d",f);
   printf("\n Factorial of %d number is:%d",f,fact(f));
}