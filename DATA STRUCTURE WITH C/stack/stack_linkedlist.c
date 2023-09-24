#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int *next;    
};

struct node *head = NULL, *top = NULL;

void append (struct node *top)
{
    struct node *temp1, *temp2;
    temp1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:\t");
    scanf("%d",&temp1->data);
    temp1->next = NULL;

    if (head == NULL)
    {
        head = top = temp1;
        temp1->next = NULL;
    }
    else
    {
        temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp1;
           
    }
    

    
}