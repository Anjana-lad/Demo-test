//assign op:==,+=,-=,,!=,*=,/=;
#include<stdio.h>
int main(){
    int num1;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    num1+=20;//num1=num1+20;
    printf("The res is:%d",num1);
    num1-=30;
    printf("\n The res is:%d",num1);
   int res= num1!=20;
    printf("\n The res is:%d",res);
}