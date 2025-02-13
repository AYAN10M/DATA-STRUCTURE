#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 0, 0, 6, 7, 0, 9, 0, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0, j = n - 1;
    while (i < j)
    {
        while (i < j && arr[i] != 0)
        {
            i++;
        }

        while (i < j && arr[j] == 0)
        {
            j--;
        }

        if (i < j)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
