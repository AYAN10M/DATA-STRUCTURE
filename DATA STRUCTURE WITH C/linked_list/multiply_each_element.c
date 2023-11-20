#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *last = NULL;

void multiply(int digit)
{
    struct node *temp1;
    temp1 = head;
    while (temp1 != NULL)
    {
        temp1->data = temp1->data * digit;
        temp1 = temp1->next;
    }
}
