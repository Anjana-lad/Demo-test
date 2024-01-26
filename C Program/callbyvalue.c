#include<stdio.h>
int swap(int a, int b){
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("\n The new value of a and b are:%d %d",a,b);
}
int main(){
   int a,b;
   printf("Enter value:");
   scanf("%d %d",&a,&b);
   printf("\n Before calling function:a=%d,b=%d",a,b);
   swap(a,b); //function calling
   printf("\n After calling function:a=%d,b=%d",a,b);
}