//string compare without using string function.
#include<stdio.h>
int main(){
    char str1[20],str2[20];
    int i,flag=0,len1=0,len2=0;
    printf("Enter string1");
    gets(str1);
    printf("Enter string2");
    gets(str2);
    for(i=0;str1[i]!='\0';i++){
        len1++;
    }
    for(i=0;str2[i]!='\0';i++){
        len2++;
    } 
    if(len1 == len2){
       printf("\n string  length are equal.");
        for(i=0;i<len1;i++){
             if(str1[i]!=str2[i]){
                flag=1;
            }
          }
    }
      else{
        printf("\n strings  length are different.");
        }
    if(flag==0){
        printf("\n given strings are same.");
    }
    else{
        printf("\n strings are different.");
    }
}