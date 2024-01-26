//ternary op:(exp 1)?True:flase
//(x>y)?x:y
#include<stdio.h>
int main(){
    int num1;
    char a;
    double d;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("The size of num1 is:%d \n ",sizeof(d));
    int r=(num1>50)?printf("num1 is max"):printf("num1 is min");
}