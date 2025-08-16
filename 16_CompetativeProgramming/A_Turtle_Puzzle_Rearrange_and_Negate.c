#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int data;
            scanf("%d", &data);
            if (data < 0)
            {
                data = data * -1;
                arr[i] = data;
            }
            else
            {
                arr[i] = data;
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        printf("%d\n", sum);
    }
}