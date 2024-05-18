//pointer to pointer ..*ptr=&num .**ptr
#include<stdio.h>
int main(){
    int num;
    int *ptr,**ptr2;
    printf("Enter the value of num:");
    scanf("%d",&num);
    ptr=&num;
    ptr2=&ptr;
    printf("The value of num is:%d",num);
    printf("The value of ptr is:%d",ptr);
    printf("The value of pointer is:%d",*ptr2);
}