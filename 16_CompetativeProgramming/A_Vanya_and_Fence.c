#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, h, width = 0;
    scanf("%d %d", &n, &h);
    int arr[n - 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= h)
        {
            width += 1;
        }
        else
        {
            width += 2;
        }
    }
    printf("%d", width);
    return 0;
}