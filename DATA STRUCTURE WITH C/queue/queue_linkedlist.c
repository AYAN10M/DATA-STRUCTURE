#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

// Function to enqueue an element and return the updated front and rear pointers
struct node* enqueue(struct node *front, struct node *rear)
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        exit(1);
    }

    printf("Enter your data:\t");
    scanf("%d", &(temp->data));
    temp->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }

    return rear; // Return the updated rear pointer
}

// Function to dequeue an element and return the updated front pointer
struct node* dequeue(struct node *front, struct node *rear)
{
    if (front == NULL && rear == NULL)
    {
        printf("Underflow\n");
        return rear; // Return the same rear pointer
    }

    struct node *temp = front;
    front = front->next;
    free(temp);

    if (front == NULL) // If the queue is now empty
    {
        rear = NULL; // Update rear to NULL
    }

    return front; // Return the updated front pointer
}

// Function to display the elements in the queue
void display(struct node *front)
{
    struct node *temp = front;
    if (temp == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice;

    do
    {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice:\t");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            rear = enqueue(front, rear);
            break;
        case 2:
            front = dequeue(front, rear);
            break;
        case 3:
            display(front);
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
