#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 2, 4, 32};
    int num;
    printf("Enter the element:\t");
    scanf("%d", &num);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == num)
        {
            printf("The element found at position: %d", i + 1);
            return 0;
        }
    }

    return 0;
}