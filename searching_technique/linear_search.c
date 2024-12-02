#include <stdio.h>

int linear_search(int array[], int size, int num) {
    // loop initialization
    int i;
    for (i = 0; i < size; i++) {
        if (array[i] == num) {
            printf("Operation successful\n"); // Add the missing semicolon here
            return i;
        }
    }
    return -1; // If the element is not found, return -1
}

void create_array(int size, int array[]) {
    int i, element;
    for (i = 0; i < size; i++) {
        printf("Enter the element of the array at index %d:\t", i);
        scanf("%d", &element);
        array[i] = element;
    }
}

int main() {
    int size, num, index;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size]; // Allocate the array in the main function

    create_array(size, array);

    printf("Enter the number to search for: ");
    scanf("%d", &num);

    index = linear_search(array, size, num);

    if (index != -1) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
