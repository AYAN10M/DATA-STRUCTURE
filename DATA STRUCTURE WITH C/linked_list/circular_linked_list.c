#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *last;

void append()
{
    struct node *temp1,*temp2,*temp3;
    temp1=(struct node*)(sizeof(struct node));
    if (temp1==NULL)
    {
        printf("Memory Allocation failed");
        return;
    }
    
    printf("Enter the data:\t");
    scanf("%d",&temp1->data);
    temp1->next=NULL;

    if (head==NULL)
    {
        head=last=temp1;
    }
    else
    {
        last->next=temp1;
        temp1->next=head;
    }
}