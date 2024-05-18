//file pointer. //write a program to write and read data to any text file.
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char string_1[]="file handling program.\n Welcome to tops.";
    //FILE *fopen ( const char * filename, const char *mode )
    fp=fopen("G:\\batch830-10\\Demo-test\\C Program\\test.txt","w");
    if(fp==NULL){
        printf("File not found.");
    }
    else{
        printf("File created.");
    }
    if(strlen(string_1)>0){
        fputs(string_1,fp);
        fputs("\n",fp);
    
    }
   printf("Data is inserted.");
   printf("file closed.");
   fclose(fp);
}
