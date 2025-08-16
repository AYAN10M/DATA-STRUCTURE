#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int largest = 0, smallest = 9999, indexLargest, indexSmallest;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Changed arr[n] to arr[i]
        if (arr[i] > largest)
        {
            largest = arr[i];
            indexLargest = i;
        }
        if (arr[i] <= smallest)
        {
            smallest = arr[i];
            indexSmallest = i;
        }
    }

    if (n == 2)
    {
        if (arr[0] > arr[1])
        {
            printf("0");
        }
        else if (arr[0] == arr[1])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }

        return 0;
    }

    int count = n - indexSmallest - 1 + indexLargest;
    if (indexLargest > indexSmallest)
    {
        printf("%d", count - 1);
    }
    else
    {
        printf("%d", count);
    }

    return 0;
}
