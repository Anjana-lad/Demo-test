//no argument with return
#include<stdio.h>
int sum(){  
    int a,b,res=0;
    printf("enter number:");
    scanf("%d %d",&a,&b);
    res=a+b;
    return res;

}
int main(){
    printf("The result is:%d",sum());//
}