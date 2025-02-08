#include <stdio.h>

int main()
{
    int arr[] = {25, 30, 45, 90, 100, 1};
    int max = 0;
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d", max);
}


// Time Complexity Analysis: O(n), where as n is size of the array