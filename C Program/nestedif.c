#include<stdio.h>
int main(){
    int age;
    char choice;
    printf("Enter choice M of F:");
    scanf("%c",&choice);
    printf("Enter age:");
    scanf("%d",&age);
    if(choice=='M'||'m'){
        if(age>=21){
            printf("eligilbe for marriage");
        }
        else{
            printf("not");
        }
    }
    else{
        if(age>=18){
            printf("Eligilbe for marriage");
        }
        else{
            printf("Not");
        }
    }    
}