#include<stdio.h>
int main(){
    int i,temp,array[5]={78,4,6,95,12};
    for(i=0;i<5;i++){
        printf("The array is:array[%d]=%d \n",i,array[i]);
    }
    for(i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(array[i]<array[j]){
                temp=array[j];
                array[j]=array[i];
               array[i]=temp;   
            }
        }
    }
    for(i=0;i<5;i++){
        printf("sort array is:%d \n",array[i]);
    }
}