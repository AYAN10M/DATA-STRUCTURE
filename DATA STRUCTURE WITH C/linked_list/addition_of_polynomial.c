#include <stdio.h>
#include <stdlib.h>

struct poly
{
    int coeff;
    int var;
    struct poly *next;
};

struct poly *head1 = NULL, *head2 = NULL, *head3 = NULL;

void create(struct poly **head)
{
    struct poly *temp1, *temp2;
    temp1 = (struct poly *)malloc(sizeof(struct poly));
    printf("Enter the Coefficient:\t");
    scanf("%d", &temp1->coeff);
    printf("Enter the Variable:\t");
    scanf("%d", &temp1->var);
    temp1->next = NULL;

    if (*head == NULL)
    {
        *head = temp1;
    }
    else
    {
        temp2 = *head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp1;
    }
}

struct poly *add_poly(struct poly *head1, struct poly *head2)
{
    struct poly *temp1, *temp2, *temp3, *head3;
    temp1 = head1;
    temp2 = head2;
    head3 = NULL;

    while (temp1 != NULL && temp2 != NULL)
    {
        temp3 = (struct poly *)malloc(sizeof(struct poly));
        if (temp3 == NULL)
        {
            printf("Memory Allocation Failed !");
            return NULL;
        }

        if (temp1->var > temp2->var)
        {
            *temp3 = *temp1;
            temp1 = temp1->next;
        }
        else if (temp1->var < temp2->var)
        {
            *temp3 = *temp2;
            temp2 = temp2->next;
        }
        else if (temp1->var == temp2->var)
        {
            temp3->coeff = temp1->coeff + temp2->coeff;
            temp3->var = temp1->var;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        temp3->next = NULL;

        if (head3 == NULL)
        {
            head3 = temp3;
        }
        else
        {
            temp3->next = head3;
            head3 = temp3;
        }
    }

    while (temp1 != NULL)
    {
        temp3 = (struct poly *)malloc(sizeof(struct poly));
        if (temp3 == NULL)
        {
            printf("Memory Allocation Failed !");
            return NULL;
        }

        *temp3 = *temp1;
        temp3->next = head3;
        head3 = temp3;
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        temp3 = (struct poly *)malloc(sizeof(struct poly));
        if (temp3 == NULL)
        {
            printf("Memory Allocation Failed !");
            return NULL;
        }

        *temp3 = *temp2;
        temp3->next = head3;
        head3 = temp3;
        temp2 = temp2->next;
    }

    return head3;
}

void display(struct poly *head)
{
    struct poly *temp = head;

    while (temp != NULL)
    {
        printf("%dx^%d", temp->coeff, temp->var);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int n1, n2, i;
    printf("Enter the number of terms in polynomial 1:\t");
    scanf("%d", &n1);

    for (i = 0; i < n1; i++)
    {
        create(&head1);
    }

    printf("\nEnter the number of terms in polynomial 2:\t");
    scanf("%d", &n2);

    for (i = 0; i < n2; i++)
    {
        create(&head2);
    }

    head3 = add_poly(head1, head2);

    printf("\nPolynomial 1: ");
    display(head1);

    printf("\nPolynomial 2: ");
    display(head2);

    printf("\nSum of the Polynomials: ");
    display(head3);
    return 0;
}
