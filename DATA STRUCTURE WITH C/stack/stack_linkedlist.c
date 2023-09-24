#include <stdio.h>
#include <stdlib.h>

// Define a struct for a node in the stack
struct node
{
    int data;
    struct node *next; // Pointer to the next node
};

// Define global pointers for head and top of the stack
struct node *head = NULL;
struct node *top = NULL;

// Function to push a new element onto the stack
void push()
{
    // Allocate memory for a new node
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    
    // Check if memory allocation was successful
    if (temp == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        exit(1);
    }
    
    printf("Enter the data:\t");
    scanf("%d", &temp->data);
    temp->next = NULL;

    // If the stack is empty, set both head and top to the new node
    if (head == NULL)
    {
        head = top = temp;
    }
    else
    {
        top->next = temp; // Add the new node to the top
        top = temp;      // Update top to be the new node
    }
}

// Function to display the elements in the stack
void display()
{
    struct node *temp = head;

    // Traverse through the stack
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Function to pop an element from the stack
void pop()
{
    // Check if the stack is empty
    if (head == NULL)
    {
        printf("Stack is empty. Nothing to pop.\n");
        return;
    }

    // If there's only one element in the stack
    if (head == top)
    {
        free(head); // Free the memory for the node
        head = top = NULL; // Set both head and top to NULL
    }
    else
    {
        struct node *temp = head;

        // Traverse to the second last node
        while (temp->next != top)
        {
            temp = temp->next;
        }

        free(top); // Free the memory for the top node
        top = temp; // Update top to be the second last node
        top->next = NULL; // Set the next pointer of the new top to NULL
    }
}

// Main function
int main()
{
    int choice;

    do
    {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice:\t");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
