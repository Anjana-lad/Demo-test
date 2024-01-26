//A
//**
//BCD
//****
//EFGHI
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            if(row%2==0){
                printf("*");
            }
            else{
                printf("%c",ch);
                ch++;
            }
        }
        printf("\n");
    }
}