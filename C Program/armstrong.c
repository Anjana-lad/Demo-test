//armstrong:153=1+125+27=153 cube of individual digit.
#include<stdio.h>
int main(){
    int n=0,i,sum=0,num;
    printf("Enter number:");
    scanf("%d",&num);
    i=num;
    while(num>0){
        n=num%10;
        num=num/10;
        sum=sum+(n*n*n); 
    }
    if(sum==i){
        printf("Its Armstrong number.");
    }
    else{
        printf("Its not a Armstrong number.");
    }
}