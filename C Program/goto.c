//goto sum:
#include<stdio.h>
int main()
{
    int sum=0;
    // printf("Enter a number:");
    // scanf("%d",&num);
    for(int i=1;i<=20;i++){
        sum=sum+i;
     if(i==10){
          goto sum;
     }
    }
     
    sum:  //goto lable:
      printf("Sum is=%d",sum);
}