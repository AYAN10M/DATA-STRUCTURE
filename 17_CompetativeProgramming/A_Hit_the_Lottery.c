#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[] = {1, 5, 10, 20, 100};
    int count = 0;

    while (n != 0)
    {
        for (i = 4; i >= 0; i--)
        {
            if (arr[i] <= n)
            {
                n -= arr[i];
                count++;
                i++;
            }
        }
    }
    printf("%d", count);
}