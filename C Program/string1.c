//string plaindrome;
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i,length,flag=0;
    printf("Enter the value of string:");
    gets(str);
    length=strlen(str);
    for(i=0;i<length/2;i++){
        if(str[i]!=str[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("%s is not a plaindrome.",str);
    }
    else{
        printf("%s is a plaindrome.",str);
    }
}