//error handling.
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("G:\\batch830-10\\Demo-test\\C Program\\t12.txt","r");
    if(fp==NULL){
        perror("Error opening the file.");
        return 1;
    }
    if(ferror(fp)){
        perror("error");
    }
    fclose(fp);
}