// Logical op:and ,or ,not== && || !
//a b AND  or !not A
//0 0 0  0  1
//1 1 1  1   0
//0 1 0  1   1
//1 0 0  1   0
#include<stdio.h>
int main(){
    int num1,res;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    res=(num1>20) || (num1==20);
    printf("the res is:%d",res);
    printf("the res is:%d",!num1);


}