#include<stdio.h>
int main(){
    int num,sum=0;
    float rem;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("\n sum of digits:%d",sum);
}