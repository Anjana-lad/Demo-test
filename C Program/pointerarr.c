//pointer arithemetic: ++,--,+,-,*,/;
#include<stdio.h>
int main(){
    int arr[5]={7,50,63,85,42};
    int *ptr;
    ptr= &arr;
    for(int i=0;i<5;i++){
        printf("the value in array are:%d,and address are:%p",*ptr,ptr);
        printf("\n");
        ptr+=2;
    }

}