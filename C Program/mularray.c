#include<stdio.h>
int main(){
    int row,col,r,c,arr1[50][50],arr2[50][50],mul[50][50];
    printf("Enter the value of rows:");
    scanf("%d",&r);
    printf("Enter the values of columns:");
    scanf("%d",&c);
    printf("Enter the value of array1:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter the value of array2:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("array1:");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d",arr1[row][col]);
        }
    }
    printf("\n array2:");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d",arr2[row][col]);
        }
    }
    printf("\n Multiply arrays:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+=arr1[row][k]*arr2[k][col];
            }
        }
    }
    printf("\n Printing array:\n ");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",mul[row][col]);
        }
    }
}    