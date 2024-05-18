//pointer .
#include<stdio.h>
int main(){
    int num1;
    int *ptr;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    ptr=&num1;
    printf("value of num is:%d",num1);
    printf("the value of address is:%d",ptr);
    printf("the value of address is:%d",*ptr);
      
}