//menu driven calculator.
#include<stdio.h>
int show(int a,char ch,int b,int res){
    printf("Result is:%d %c %d=%d",a,ch,b,res);
}
int sum(int a,int b){
    int res=a+b;
    show(a,'+',b,res);
}
int sub(int a,int b){
    int res=a-b;
    show(a,'-',b,res);
}
int mul(int a,int b){
    int res=a * b;
    show(a,'*',b,res);
}
int div(int a,int b){
    int res=a/b;
    show(a,'/',b,res);
}
int main(){
   int a,b,choice;
   printf("Enter number:");
   scanf("%d %d",&a,&b);
   printf("Select your choice \n");
   printf("\n 1.Addition");
   printf("\n 2.Subtraction");
   printf("\n 3.Multiplication");
   printf("\n 4.Division");
   printf("\n Enter your choice:");
   scanf("%d",&choice);
   switch(choice){
      case 1:
        sum(a,b);
            break;
        case 2:
        sub(a,b);
            break;
        case 3:
        mul(a,b);
           break;
        case 4:
        div(a,b);
            break;
        default:
            printf("Invalid choice.");
            break;
   }
}