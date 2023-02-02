#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push()
{
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("overflow/n");
    }
    printf("\n enter the item to be pushed :\n");
    scanf("%d",&item);
    ptr->data=item;
    if(top==NULL)
    {
        top=ptr;
        ptr->next=NULL;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }

}
void display()
{
    struct node *temp;
    printf("the elements of stack are:\n");
    temp=top;
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;

    }

}
void main()
{
    int choice=0;
    while (choice!=3)
    {
        printf("enter 1 for insertion in stack , 2 for display and 3 to exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("invalid choice");
            break;
        }
    } 
    
    
}
