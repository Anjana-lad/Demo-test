#include<stdio.h>
int sum(int n){
   if(n!=0){
    return n+sum(n-1);//recursion 
   }  
   else{
   return 0;
   }
}
int main(){
   int f;
   printf("Enter num");
   scanf("%d",&f);
   printf("\n Number is:%d",f);
   printf("\n Addition of %d number is:%d",f,sum(f));
}