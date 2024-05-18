//reading the file.
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char string_1[50];
    //FILE *fopen ( const char * filename, const char *mode )
    fp=fopen("G:\\batch830-10\\Demo-test\\C Program\\test.txt","r+");
    if(fp==NULL){
        printf("File not found.");
    }
    else{
        printf("File Found..");
    }
    while(fgets(string_1,50,fp)!=NULL){
       printf(" %s",string_1);
    }
   fclose(fp);
}
