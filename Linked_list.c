#include<stdio.h>
#include<stdlib.h>
//structure defination//
typedef struct linked
{
    int val;
    struct linked *next;
}lnk;
//prototype//

lnk *create();
//lnk *del(lnk *,int);
lnk *insertatpos(lnk *,int,int);
void display(lnk *);
// main function//
int main()
{
    int nv,v,loc;
    lnk *h;
    h=create();
    printf("\nlinked list is ");
    display(h);
     //printf("Enter the value you want to delete : ");
     //scanf("%d",&v);
    // h=del(h,v);
      
    printf("\nEnter the position where u want to add : ");
     scanf("%d",&loc);
     printf("\nEnter the new value : ");
     scanf("%d",&nv);
    h=insertatpos(h,nv,loc);
    printf("\nlinked list is ");
    display(h);
}

lnk *insertatpos(lnk *h,int nv,int loc)
{   int i=1;
    lnk *temp,*ptr,*pre;
    temp=(lnk *)malloc(sizeof(lnk));
    temp->val=nv;
    if(loc==1)
    {
      temp->next=h;
      h=temp;
    }
    else
    {
    ptr=h;
    
    while(i<loc  && ptr!=NULL)
    {
        pre=ptr;
        ptr=ptr->next;
        i++;
    }
    temp->next=pre->next;
    pre->next=temp;
    }
    return h;
}

// code for creation//
lnk *create()
{
    lnk *h=NULL,*ptr,*temp;
    char ch;
    int v;
    while(1)
    {
        printf("enter the value ");
        scanf("%d",&v);
        temp=(lnk*)malloc(sizeof(lnk));
        temp->val=v;
        temp->next=NULL;
        
        if(h==NULL)
        h=temp;
        else
        ptr->next=temp;
        ptr=temp;
        //fflush(stdin);
        printf("do you have more node :");
        scanf(" %c",&ch);
              if(ch=='n')
        return h;
    }
}
    //code for traversal//
 

    void display(lnk*h)
  { while(h!=NULL)
   { printf("%d,",h->val);
    h=h->next;
}
}
