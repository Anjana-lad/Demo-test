//relational op:<,>,<=,>=,==;
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("\n Enter a numbers:");
    scanf("%d %d",&num1,&num2);
    res=num1>num2;
    printf("\n The res is:%d",res);
    res=num1<num2;
    printf("\n The res is:%d",res);
     res=num1>=num2;
    printf("\n The res is:%d",res);
     res=num1<=num2;
    printf("\n The res is:%d",res);
     res=num1 == num2;
    printf("\n The res is:%d",res);
}