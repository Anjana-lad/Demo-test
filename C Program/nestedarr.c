//nested structure
#include<stdio.h>
struct employee{
     int Emp_id;
     char name[20];
     float salary;
        struct department{
            int dep_id;
            char dep_name[20];
    }dep; 
};
int main(){
    struct employee emp1;
    printf("Employee details:\n ");
    printf("Enter name:");
    gets(emp1.name);
    printf("Enter Id and Salary of employee:\n ");
    scanf("%d %f",&emp1.Emp_id,&emp1.salary);
    printf("Enter department id and name:");
    scanf("%d %s",&emp1.dep.dep_id,&emp1.dep.dep_name);
    
    printf("\n The Employees details \n");
    printf("\n Name: %s\n",emp1.name);
    printf("\n Employee id: %d\n",emp1.Emp_id);
    printf("\n Salary: %f\n",emp1.salary);
    printf("\n Department _id: %d\n",emp1.dep.dep_id);
    printf("\n Department_Name: %s\n",emp1.dep.dep_name);
}