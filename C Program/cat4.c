//with arg with ret
#include<stdio.h>
int sum(int a,int b){  
    return a+b;
}
int main(){
    int a,b;
    printf("enter number:");
    scanf("%d %d",&a,&b);
    printf("Sum is:%d",sum(a,b));
}