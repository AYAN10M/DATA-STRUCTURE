#include <stdio.h>

// Selection sort
void sort_Array(int array[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Binary search
int binary_search(int array[], int l, int u, int num)
{
    int mid = (u + l) / 2;
    if (array[mid] == num)
    {
        return mid;
    }
    if (array[mid] > num)
    {
        return binary_search(array, l, mid - 1, num);
    }
    if (array[mid] < num)
    {
        return binary_search(array, mid + 1, u, num);
    }
    // When element could not be found
    return -1;
}

// Creating array
void create_array(int size, int array[])
{
    int i, element;
    for (i = 0; i < size; i++)
    {
        printf("Enter the element of the array at index %d:\t", i);
        scanf("%d", &element);
        array[i] = element;
    }
}

int main()
{
    int size;
    printf("Enter the size of the array:\t");
    scanf("%d", &size);
    int num;
    printf("Enter the element for searching:\t");
    scanf("%d", &num);

    int array[size];
    create_array(size, array);
    sort_Array(array, size);

    int upperbound = size - 1;
    int lowerbound = 0;

    int index = binary_search(array, lowerbound, upperbound, num);

    if (index != -1)
    {
        printf("The element found at index: %d", index);
    }
    else
    {
        printf("Element could not be found in the array");
    }

    return 0;
}
