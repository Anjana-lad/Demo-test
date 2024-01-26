//structure using loop.
#include<stdio.h>
struct student{  //structure defination.
    int id;
    char name[20];  // structure data member
    float percent;
};
int main(){
   struct student s[100];
    int i;
   printf("\n Enter students details: \n");
    for(i=0;i<2;i++){
       scanf("%d %s %f",&s[i].id,&s[i].name,&s[i].percent);       //by user
    }
    printf("\n Student details \n ");
    for(i=0;i<2;i++){
        printf("\n id are: %d",s[i].id);
        printf("\n name is: %s",s[i].name);
        printf("\n Percent are: %.2f%%",s[i].percent);
    }
}