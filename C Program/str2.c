#include<stdio.h>
int main(){
char string1[5],string2[5];
int i,temp = 0;
printf("Enter the  1st string :\n");
gets(string1);
printf("\n Enter the 2nd String :\n");
gets(string2);
for(i=0; string1[i]!='\0'; i++){
if(string1[i] == string2[i])
temp = 1;
else
temp = 0;
}
if(temp == 1)
printf("Both the strings entered  are same.");
else
printf("Both the strings entered are not same.");
}