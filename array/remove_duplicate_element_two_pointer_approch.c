//  Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i = i + 1;
        }
    }

    for (int a = 0; a <= i; a++)
    {
        printf("%d\t", arr[a]);
    }
    printf("\n");

    return 0;
}