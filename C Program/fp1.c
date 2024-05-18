//file pointer with both write and read.
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("c);
    fprintf(fp,"Harsh,Priyank,Radhika,Rishabh");
    fclose(fp);
    fp=fopen("G:\\batch830-10\\Demo-test\\C Program\\t1.txt","r");
    char str[2];
   while(fgets(str,2,fp)!=NULL){
       printf("%s",str);
    }   
    fclose(fp);
}