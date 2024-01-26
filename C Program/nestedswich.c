#include<stdio.h>
int main(){
      char choice;
      int ch;
    printf("Enter choice for pizza P,sandwich S");
    scanf("%c",&choice);
    switch (choice)
    {
    case 'P':
          printf("\n Select Pizza type");
          printf("\n 1:cheese Pizza");
          printf("\n 2:Panneer Pizza");
          printf("\n Enter choice of Pizza");
          scanf("%d",&ch);
          switch (ch)
          {
          case 1:
            printf("\n Cheese pizza Rs 250");
            break;
          case 2:
          printf("\n Panneer pizza Rs 350"); 
            break;  
          default:
             printf("sorry");
            break;
          }
        break;
    case 'S':
          printf("\n Select Sandwich type");
          printf("\n 1:cheese Sandwich");
          printf("\n 2:Panneer Sandwich");
          printf("\n Enter choice of Sandwich");
          scanf("%d",&ch);
          switch (ch)
          {
          case 1:
            printf("\n Cheese S Rs 250");
            break;
          case 2:
          printf("\n Panneer S Rs 350"); 
            break;  
          default:
             printf("sorry");
            break;
     }
    default:
        printf("\n Invalid......");
        break; 
}
}