#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter num:");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>=n2 && n1>=n3)
    {
        printf("n1 is greater than n2 and n3");
    }
    else if(n2>=n1 && n2>=n3){
        printf("n2 is greater ");
    }
    else{
        printf("n3 is greater");
    }
}