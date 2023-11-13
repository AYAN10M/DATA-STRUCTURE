#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *last = NULL;

void delete_duplicate()
{
    struct node *temp1, *temp2, *temp3;
    temp1 = head;
    while (temp1 != NULL && temp1->next != NULL)
    {
        temp2 = temp1;
        while (temp2->next != NULL)
        {
            if (temp1->data == temp2->next->data)
            {
                temp3 = temp2->next;
                temp2->next = temp3->next;
                free(temp3);
            }
            else
            {
                temp2 = temp2->next;
            }
            
        }
        temp1 = temp1->next;
    }
}