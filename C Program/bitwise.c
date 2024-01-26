//bitwise op: &,|,^,~=-(n+1)
//a b ^
//0 0 0
//1 1 0
//1 0 1
//0 1 1
#include<stdio.h>
int main(){
    int num1,res;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    res=(num1>0)^(num1<20);
    printf("%d",res);
    int abc=-45;
    res=~(abc);
    printf("\n %d",res);
}