#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

struct node *head=NULL,*last=NULL;

void append()
{
    struct node *temp1 = (struct node *)malloc(sizeof(struct node));
    if (temp1 == NULL)
    {
        printf("Memory Allocation failed !!!");
        return;
    }

    printf("Enter the data:\t");
    scanf("%d", &temp1->data);
    temp1->next = NULL;
    temp1->previous = NULL;

    if (head == NULL)
    {
        head = last = temp1;
    }
    else
    {
        temp1->previous = last;
        last->next = temp1;
        last = temp1;
    }
}
