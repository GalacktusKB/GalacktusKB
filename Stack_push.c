#include<stdio.h>
#include<stdlib.h>


typedef struct linked
{
    int val;
    struct linked*next;
    
}lnk;
    
lnk*top;
//push
void push(int j)
{
    lnk*newnode;
    newnode=(lnk*)malloc(sizeof(lnk));
    newnode->val=j;
    newnode->next=top;
    top=newnode;
    
}

   //display function
void display()
{
    lnk*temp;
    temp=top;
    if(top==NULL)
    printf("the stack is empty");
    else
    while(temp!= NULL)
    {
        printf(":%d",temp->val);
        temp=temp->next;
        
    }
}
   //main //    
    int main()
    
    {
        int choice,j;
        while(1)
        {
        printf("\n1)push\n2)display\n3)exit");
        printf("\n Enter your choice:");
        scanf("\n%d",&choice);
        switch(choice)
        {
    case 1:
        printf("Enter the value to insert:");
        scanf("\n%d",&j);
        push(j);
        break;
  
    case 2:
        display();
        break;
    case 3:
       exit(0);
       break;
      default:
      printf("choice is wrong");
    }
  }
 }
