//AAAAA
//BBBB
//CCC
//DD
//E
#include<stdio.h>
int main(){
    int row,col,num=5;
    char ch='A';
    for(row=1;row<=5;row++){
      for(col=num;col>=1;col--){
        printf("%c",ch);
      }
      num--;
      ch++;     
      printf("\n");
    }
}