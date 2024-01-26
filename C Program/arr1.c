#include<stdio.h>
int main(){
    int i,arr1[]={5,3,2,4,8,7};//static array.
    for(i=0;i<=5;i++){
        printf("The array is:arr1[%d]=%d \n",i,arr1[i]);
    }
    for(i=0;i<=5;i++){
        printf("The square is:arr1[%d]=%d \n",i,arr1[i]*arr1[i]);
    }
}