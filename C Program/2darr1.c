#include<stdio.h>
int main(){
    int row,col,arr[4][3];
    printf("Enter numbers:");
    for(row=0;row<4;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    for(row=0;row<4;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf(" %d \t ",arr[row][col]);
        }
    }

}