#include <stdio.h>

int main()
{
    int n, x, y;
    scanf("%d", &n);

    scanf("%d", &x);
    int arr1[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &y);
    int arr2[y];
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int flag = 1;

    for (int i = 1; i <= n; i++)
    {
        int can_pass = 0;
        for (int j = 0; j < x; j++)
        {
            if (arr1[j] == i)
            {
                can_pass = 1;
            }
        }
        if (!can_pass)
        {
            for (int j = 0; j < y; j++)
            {
                if (arr2[j] == i)
                {
                    can_pass = 1;
                    break;
                }
            }
        }
        if (!can_pass)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}
