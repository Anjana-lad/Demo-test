#include<stdio.h>
#include<string.h>
int main(){
    int len;
    char str1[20],str2[20],str3[20]="programming";
    printf("Enter the string:");
    gets(str1);
    printf("Enter the string2:");
    gets(str2);

  //  len=strlen(str1);
  //  int len2=strlen(str2);
   // printf("The length is:%d",len);
   // printf("\n The length is:%d",len2);
   // printf("\n The uppercase: %s",strupr(str1));
   // printf("\n The Lowercase: %s",strlwr(str2));
   // printf("\n String compare1: %d",strcmp(str1,str2));
   // printf("\n String compare2: %d",strcmp(str1,str3));
    //printf("\n String compare3: %d",strcmp(str2,str3));
  //printf("\n String concatenate:%s",strcat(str1,str3));
    printf("\n string substring :%s",strstr(str3,"gram"));
    printf("\n string reverse :%s",strrev(str2));
    printf("\n copy string:%s",strcpy(str2,str3));
}