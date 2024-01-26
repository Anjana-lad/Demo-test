#include<stdio.h>
int main(){
   char vowel;
    printf("Enter character:");
    scanf("%c",&vowel);
    switch (vowel)
    {
    case 'a':
            printf("A is a vowel");
        break;
    case 'e':
            printf("E is vowel");
         break;
    case 'i':
            printf("I is a vowel");
        break;
    case 'o':
            printf("o is a vowel");
        break;
    case 'u':
            printf("U is a vowel");
        break;                 
    default:
         printf("it is a consonant");
        break;
    }
}