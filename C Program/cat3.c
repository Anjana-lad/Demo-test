//with argu no return
#include<stdio.h>
void sum(int a,int b){  //parameter /argument
    int res=a+b;
    printf("res is:%d",res);
}  
int main(){
    int a,b;
    printf("enter number:");
    scanf("%d %d",&a,&b);
    sum(a,b);  //fun call
}