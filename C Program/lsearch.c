#include<stdio.h>
int search(int array[],int size,int num){
    int i;
    for(i=0;i<size;i++)
        if(array[i]==num)
        return i;
    return -1;    
    
}
int main(){
    int array[]={7,85,9,5,63};
    int num=63;
    int size=sizeof(array)/sizeof(array[0]);
    int res=search(array,size,num);
    if(res==-1){
        printf("not found..");
    }
    else{
        printf("found position of number:%d",res);
    }
}