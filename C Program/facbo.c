//1,1,2,3,5,8,13,21.....
#include<stdio.h>
int main(){
    int n1=0,n2=1,temp=0,count,num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d\t%d\t",n1,n2);  
    count=2;
    while(count<num){ 
        temp=n1+n2;
          n1=n2;   
          n2=temp; 
          count++;
     printf("%d \t",temp);
    } 
}