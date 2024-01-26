//ABCDE
//ABCD
//ABC
//AB
//A
#include<stdio.h>
int main(){
    int row,col;
    int num=5;
    for(row='A';row<='E';row++){
      for(col='A';col>=num;col--){
        printf("%c",col);  
      }
      num--;
    printf("\n");
    }
}    