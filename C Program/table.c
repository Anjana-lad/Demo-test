//multiplication table:2*1=2;
#include<stdio.h>
int main(){
    int num,i=1;
    printf("enter num:");
    scanf("%d",&num);
    do{
        printf("%d * %d =%d ",num,i,num*i);
       i++;
          printf("\n");
    }
    while(i<=num);
}