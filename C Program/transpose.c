#include<stdio.h>
int main(){
    int row,col,r,c,arr1[20][20],temp;
    printf("Enter the value of rows and colunms:");
    scanf("%d %d",&r,&c);
    printf("enter the value of array:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    for(row=0;row<r;row++){
        printf(" \n ");
        for(col=0;col<c;col++){
            printf("%d ",arr1[row][col]);
        }
    }
    printf("\n\nTranspose array: \n");
    for(col=0;col<c;col++){
        printf("\n");
        for(row=0;row<r;row++){
            printf("%d",arr1[row][col]);
        }
    }
    printf("\n\nthe original array is:\n ");
    for(row=0;row<r;row++){
        printf(" \n ");
        for(col=0;col<c;col++){
           printf("%d",arr1[row][col]);
        }
    }
}