//Union used union keyword and is slower then structure.
//to access this we can access it by . operator.
#include<stdio.h>
union student{  //union defination.
    int id;
    char name[20];  // union data member
    float percent;
}s1,s2;  //union variable.
int main(){
   printf("\n Enter students details: \n");
   printf("Enter the student1 id:");
   scanf("%d",&s1.id);  //by user 
    printf("Enter the student1 name:");
   scanf("%s",&s1.name); 
   printf("Enter the student1 percent:");
   scanf("%f",&s1.percent); 
   printf("Enter the student1 id:");
   scanf("%d",&s2.id);  //by user 
    printf("Enter the student1 name:");
   scanf("%s",&s2.name); 
   printf("Enter the student1 percent:");
   scanf("%f",&s2.percent); 
   printf("\n Enter students details: \n");
   printf("\n Details of student 1: \n%d \n %s \n %f",s1.id,s1.name,s1.percent);
   printf("\n Details of student 2:\n%d \n %s \n %f",s2.id,s2.name,s2.percent);
}