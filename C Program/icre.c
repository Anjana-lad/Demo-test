//increment ,decrement ++,--
//post,pre
// num1++=post
// ++num1==pre
#include<stdio.h>
int main(){
    int num1,res;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    res=num1++;
   int sec=num1;
      printf("%d",res);
      printf("\n %d",sec);
    res=++num1;
    printf("\n %d",res);
}