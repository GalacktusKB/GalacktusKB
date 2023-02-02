#include<stdio.h>
int st[50],top=-1,n;
void push()
{
    if(top>=n-1)
    {
        printf("Overflow\n");
    }
    else
    {
        int element;
        printf("Enter Element: ");
        scanf("%d",&element);
        top++;
        st[top]=element;
    }
}
void display()
{
    int i=top;
    while(i>=0)
    {
        printf("%d ",st[i]);
        i--;
    }
}
void main()
{
    printf("Enter maximum number of element in stack:");
    scanf("%d",&n);
    char choice;
    printf("Do you want to push in stack?");
    scanf("%s",&choice);
    while(choice=='Y')
    {
        push();
        printf("Do you want to push in stack?");
        scanf("%s",&choice);
    }
    printf("Displaying stack:");
    display();
}
