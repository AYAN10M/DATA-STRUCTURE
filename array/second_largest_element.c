#include <stdio.h>

int main()
{
    int arr[] = {25, 30, 45, 90, 100, 1};
    int max1 = 0, max2 = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (max1 < arr[i])
        {
            max1 = arr[i];
            i++;
        }

        if (max1 > max2 && max2 < arr[i] && max1 != max2)
        {
            max2 = arr[i];
        }
    }

    printf("%d", max2);
}

// Time Complexity Analysis: