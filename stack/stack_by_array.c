#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int push(int array[], int size, int top);
int pop(int array[], int top);
void display(int array[], int top);
void peek(int array[], int top);

int main()
{
    int option, size;
    printf("Enter the size of the stack:\t");
    scanf("%d", &size);
    int *array = (int*) malloc(size * sizeof(int)); // Define the stack array with the given size using dynamic memory allocation
    int top = -1;    // Initialize top to -1 to indicate an empty stack

    while (1)
    {
        printf("\n\n----------------------------- Main Menu -----------------------------\n");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n");
        printf("Enter your choice:\t");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            top = push(array, size, top);
            break;
        case 2:
            top = pop(array, top);
            break;
        case 3:
            display(array, top);
            break;
        case 4:
            peek(array, top);
            break;
        case 5:
            exit(0); // Exit the program
        default:
            printf("Enter correct option\n");
            break;
        }
    }

    free(array); // Free the dynamically allocated memory
    return 0;
}

int push(int array[], int size, int top)
{
    int data;
    if (top == size - 1)
    {
        printf("Overflow\n");
        return top;
    }
    else
    {
        printf("Enter the data you want to push:\t");
        scanf("%d", &data);
        top = top + 1;
        array[top] = data;
        return top;
    }
}

int pop(int array[], int top)
{
    if (top == -1)
    {
        printf("Underflow\n");
        return top;
    }
    else
    {
        printf("Popped element: %d\n", array[top]);
        top = top - 1;
        return top;
    }
}

void display(int array[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("\n\nStack elements:\n");
        for (int i = 0; i <= top; i++)
        {
            printf("\t%d\n", array[i]);
        }
    }
}

void peek(int array[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Item at the top is:\t%d\n", array[top]);
    }
}
