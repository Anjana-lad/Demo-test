//plaindrome:1001==reverse ==1001
#include<stdio.h>
int main(){
    int ori_num,n,rem,rev=0;
    printf("Enter number:");
    scanf("%d",&ori_num);
    n=ori_num;
    do{
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }while(n!=0);
          printf("reverse number is: %d \n ",rev);

     if(rev==ori_num){
        printf("Its a Plaindrome number.");
     }
     else{
        printf("not a plaindrome.");
     }
}