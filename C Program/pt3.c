//A
//AB
//ABC
//ABCD
//ABCDE
//1
//12
//123
//1234
//12345
#include<stdio.h>
int main(){
    int row,col;
    for(row='A';row<='E';row++){
      for(col='A';col<=row;col++){
        printf("%c",col);  
      }
    printf("\n");
    }
}    
// int main(){
//     int row,col;
//     for(row=0;row<=5;row++){
//       for(col=0;col<=row;col++){
//         printf("%d",col+1);  
//       }
//         printf("\n");
//     }
// }    