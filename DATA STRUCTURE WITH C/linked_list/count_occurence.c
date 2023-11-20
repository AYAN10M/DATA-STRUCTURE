#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head =NULL, *last = NULL;

int count_occurence(int data)
{
    struct node *temp1, *temp2, *temp3;
    int count = 0;

    temp1 = head;
    while (temp1 != NULL)
    {
        if (temp1->data == data)
        {
            count++ ;
        }
        
        temp1 = temp1->next;
    }

    return count;
}