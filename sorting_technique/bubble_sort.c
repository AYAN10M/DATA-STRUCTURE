#include <stdio.h>
#include <stdlib.h>

// function to take the array data
void createArray(int size, int array[])
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element at position %d:\t", i);
        scanf("%d", &array[i]);
    }
}

// function to print the array element
void printArray(int size, int array[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}

// function to swap two integers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// bubble sort function
void bubbleSort(int size, int array[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                swap(&array[i], &array[j]);
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of the array:\t");
    scanf("%d", &size);
    int array[size];
    createArray(size, array);

    printf("\nArray before:\n");
    printArray(size, array);

    bubbleSort(size, array);

    printf("\nAfter sorting:\t");
    printArray(size, array);

    return 0;
}