#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, temp;
    scanf("%d", &y);
    y++;
    while (1)
    {
        temp = y;
        int arr[4], div = 1000;
        for (int i = 0; i < 4; i++)
        {
            int digit = temp / div;
            temp = temp % div;
            arr[i] = digit;
            div /= 10;
        }
        int flag = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (arr[i] == arr[j])
                {
                    flag = 1;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (!flag)
        {
            break;
        }

        y++;
    }
    printf("%d", y);
    return 0;
}