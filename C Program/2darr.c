#include<stdio.h>
int main(){
    int row,col,arr[2][3]={{12,3,56},{42,85,7}};
    for(row=0;row<2;row++){
        printf("\n ");
        for(col=0;col<3;col++){
            printf(" %d \t",arr[row][col]);
        }
    }
}