#include<stdio.h>
int main(){
   int choice,q,res=0,a;
   char x;
   do{
   printf("------------MENU---------------");
   printf("\n1. pizza      price = 180rs/pcs");
   printf("\n2. Burger     price = 100rs/pcs");
   printf("\n3. Dosa       price = 120rs/pcs");
   printf("\n4. Idli       price = 50rs/pcs\n");

   printf("\nPlease Enter your choice... : ");
   scanf("%d",&choice);

     switch(choice){
         case 1:
         printf("\nEnter the Quantity : ");
         scanf("%d",&q) ;
         a = q*180;
         printf("Amount : %d \n", a);
         printf("Total amount: %d\n",res = res +a);
         break;

         case 2:
         printf("\nEnter the Quantity : ");
         scanf("%d",&q) ;
         a = q*100;
         printf("Amount : %d \n",a);
         printf("Total amount: %d\n",res = res + a);
         break;

         case 3: 
         printf("\nEnter the Quantity : ");
         scanf("%d",&q) ;
         a = q*120;
         printf("Amount : %d \n",a);
         printf("Total amount: %d\n",res = res + a);
         break;

         case 4: 
         printf("\nEnter the Quantity : ");
         scanf("%d",&q) ;
         a = q*50;
         printf("Amount : %d \n",a);
         printf("Total amount: %d\n",res = res + a);
         break;

         default: printf("Invalid choice\n");
   }
   
        printf("\nDo you want to order more? y & n : ");
        scanf(" %c", &x);
     }
      while( x=='y' || x=='Y');  
}