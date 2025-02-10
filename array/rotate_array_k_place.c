#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k;
    printf("Enter the the value of k:\t");
    scanf("%d", &k);

    k = k % 10;

    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
    Suppose the given array is
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10

        The array size is 10.

    We have to rotate it by k = 1 place then the array would be:
        2, 3, 4, 5, 6, 7, 8, 9, 10, 1

    When k = 2:
        3, 4, 5, 6, 7, 8, 9, 10, 1, 2

    And so on,
    Now what if k = 10
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10
        We are getting the original array so in this case we did not need to rotate them at all

    And what if for k = 14
        Only we need to rotate the array from 4th position
        Means k = k % 10
              14 % 10 = 4
        We have to rotate it for 4 times instead of 14 times
*/