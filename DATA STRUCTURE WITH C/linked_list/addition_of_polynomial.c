#include <stdio.h>
#include <stdlib.h>

struct poly
{
    int coeff;
    int var;
    struct poly * next;
};

struct poly *head1, *head2, *head3;

void create(struct poly *head)
{
    struct poly *temp1, *temp2;
    temp1 = (struct poly *)malloc(sizeof(struct poly));
    printf("Enter the Coefficient:\t");
    scanf("%d",&temp1->coeff);
    printf("Enter the Variable:\t");
    scanf("%d",&temp1->var);


    if (head == NULL)
    {
        head = temp1;
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
    return head;
}

struct poly *add_poly( struct ploy *head1, struct poly *head2, struct poly *head3)
{
    struct poly *temp1, *temp2, *temp3;
    temp1 = head1;
    temp2 = head2;
    temp3 = head3;

    while (temp1->next != NULL && temp2->next !=NULL)
    {
        temp3 = (struct poly*)malloc(sizeof(struct poly));
        if (temp3 == NULL)
        {
            printf("Memory Allocation Failed !");
        }

        
        if (temp1->var > temp2->var)
        {
            if (temp3 == NULL)
            {
                head3 = temp1;
                temp1 = temp1->next;
            }
            else
            {
                while (temp3->next != NULL)
                {
                    temp3 = temp3->next;
                }
                temp3->next = temp1;
                temp1 = temp1->next;
            }
        }
        else if (temp1->var < temp2->var)
        {
            if (temp3 == NULL)
            {
                head3 = temp2;
                temp2 = temp2->next;
            }
            else
            {
                while (temp3->next != NULL)
                {
                    temp3 = temp3->next;
                }
                temp3->next = temp2;
                temp2 = temp2->next;
            }
        }
        else if(temp1->var == temp2->var)
        {
            if (temp3 == NULL)
            {
                head3->coeff = temp1->coeff + temp2->coeff;
                head3->var = temp1->var;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else
            {
                while (temp3->next != NULL)
                {
                    temp3 = temp3->next;
                }
                temp3->next->coeff = temp1->coeff + temp2->coeff;
                temp3->var = temp1->var;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }     
    }
    
    while (temp1->next != NULL)
    {
        temp3->next = temp1;
        temp1 = temp1->next;
    }
    while (temp2->next != NULL)
    {
        temp3->next = temp2;
        temp2 = temp2->next;
    }

    temp3->next = NULL;
    return head3;
}