#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, flag;
    scanf("%d", &n);
    while (n--)
    {
        flag = 0;
        int opinion;
        scanf("%d", &opinion);
        if (opinion == 0)
        {
            continue;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }

    return 0;
}