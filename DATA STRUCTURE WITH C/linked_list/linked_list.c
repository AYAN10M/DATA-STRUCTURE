#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent a node in the linked list
struct node
{
    int data;           // Data held by the node
    struct node *next;  // Pointer to the next node in the list
};

// Declare global pointers to the head and last node of the linked list
struct node *head = NULL, *last = NULL;

// Function to append a new node at the end of the linked list
void append()
{
    struct node *temp;

    // Allocate memory for a new node
    temp = (struct node*)malloc(sizeof(struct node));

    // Check if memory allocation was successful
    if (temp == NULL)
    {
        printf("Memory Allocation failed !!!");
        return;
    }
    
    printf("Enter the data:\t");
    scanf("%d", &temp->data);  // Read data from the user
    temp->next = NULL;         // Set the next pointer to NULL

    // If the list is empty, set both head and last to the new node
    if (head == NULL)
    {
        head = last = temp;
    }
    else
    {
        // Otherwise, link the new node to the last node and update last
        last->next = temp;
        last = temp;
    }
}

// Function to display the linked list
void display()
{
    struct node *show = head;

    // Traverse through the linked list and print each node's data
    while (show != NULL)
    {
        printf("%d -> ", show->data);
        show = show->next;
    }

    printf("NULL\n");
}

// Function to insert a new node at a specified position in the linked list
void insert(int position)
{
    int count = 1;
    struct node *temp1, *temp2, *temp3;

    // Allocate memory for the new node to be inserted
    temp1 = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data:\t");
    scanf("%d", &temp1->data);  // Read data from the user
    temp1->next = NULL;         // Set the next pointer to NULL

    printf("Enter the position where insertion will take place:\t");
    scanf("%d", &position);

    // Case 1: Insert at the head
    if (position == 1)
    {
        temp1->next = head;  // Link the new node to the current head
        head = temp1;        // Update head to point to the new node
    }
    else
    {
        temp2 = head;
        // Traverse to the node just before the desired insertion position
        while (count < position - 1)
        {
            temp2 = temp2->next;
            count++;
        }
        // If the next node is NULL, insert at the end
        if (temp2->next == NULL)
        {
            temp2->next = temp1;  // Link the new node to the last node
        }
        else
        {
            temp3 = temp2->next;   // Hold the current next node
            temp2->next = temp1;   // Link the new node to the current node
            temp1->next = temp3;   // Link the next of new node to the held next node
        }
    }
}

// Function to delete a node from a specified position in the linked list
void delete(int position)
{
    struct node *temp1, *temp2, *temp3;
    int count = 1;

    if (position == 1)
    {
        temp1 = head;      // Hold the current head
        head = head->next; // Update head to point to the next node
        free(temp1);       // Free memory of the deleted node
    }
    else
    {
        temp2 = head;
        // Traverse to the node just before the node to be deleted
        while (count < position - 1)
        {
            temp2 = temp2->next;
            count++;
        }
        // If the next node is NULL, the position is out of range
        if (temp2->next == NULL)
        {
            printf("Out of range");
            return;
        }
        else
        {
            temp1 = temp2->next;   // Hold the node to be deleted
            temp3 = temp1->next;   // Hold the next node
            temp2->next = temp3;   // Link the current node to the next node
        }
        free(temp1);  // Free memory of the deleted node
    }
}

// Main function
int main()
{
    int choice, position;

    while (1)  // Infinite loop to keep the program running until explicitly exited
    {
        printf("\nLinked List Operations:\n");
        printf("1. Append\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                append();
                break;
            case 2:
                printf("Enter the position where insertion will take place: ");
                scanf("%d", &position);
                insert(position);
                break;
            case 3:
                printf("Enter the position of the node to delete: ");
                scanf("%d", &position);
                delete(position);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);  // Terminate the program
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
