#include <stdio.h>

int main()
{
    int arr[] = {25, 30, 45, 90, 100, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2)
    {
        return 0;
    }

    int max1 = arr[0], max2 = arr[1];

    if (max1 < max2)
    {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    printf("%d\n", max2);
    return 0;
}
