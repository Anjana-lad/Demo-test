#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a number where to stop:");
    scanf("%d",&num);
    for(i=10;i<=num;i++){
        printf("%d \n",i);
    }
}