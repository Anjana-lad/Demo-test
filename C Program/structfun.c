//function using structure as argument.
#include<stdio.h>
struct student{
    int rollno;
    char grade;
    float marks[4];
};
  int display(struct student kid){
    printf("\n Students Details:\n");
    printf("Roll_no is: %d \n",kid.rollno);
    printf("Grade: %c \n ",kid.grade);
  //  int i=sizeof(stud.marks)/sizeof(float);
  //  printf("=total size:%d",i);
        for(int i=0;i<4;i++){
            printf("Marks are: %f \n",kid.marks[i]);
        }
 }
int main(){
    struct student s1={1,'A',{75,85,95,85.3}};
    struct student s2={2,'B',{85.02,95.2,74.63,63.5}};
    display(s1);
    display(s2);
}