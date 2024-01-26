//struct defination how to define a structure,how to initilization and use it.
//to access this we can access it by . operator.
#include<stdio.h>
struct student{  //structure defination.
    int id;
    char name[20];  // structure data member
    float percent;
}s1,s2;  //structure variable.
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
   printf("Details of student 1:%d \n %s \n %f",s1.id,s1.name,s1.percent);
   printf("Details of student 2:%d \n %s \n %f",s2.id,s2.name,s2.percent);
}