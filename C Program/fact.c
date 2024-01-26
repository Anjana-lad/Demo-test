//fact=5!=5*4*3*2*1=120
#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter anumber:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial is:%d",fact);
}