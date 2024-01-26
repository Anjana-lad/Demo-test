#include<stdio.h>
int main(){
    int num1;
    printf("Enter number:");
    scanf("%d",&num1);
    do{
        printf("number is:%d \n",num1);
        num1++;
    }while(num1<10);
}