#include<stdio.h>
int main(){
   int i,arr1[7];     //dynamic array
   printf("Enter the value:");
   for(i=0;i<=6;i++){
    scanf("%d",&arr1[i]);
   }
      for(i=0;i<=6;i++){
    printf("\n arr1[%d]=%d\n",i,arr1[i]);
   }
}