#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int remainder = a % b;
        int moves = 0;

        if (remainder != 0)
        {
            moves = b - remainder;
        }

        printf("%d\n", moves);
    }

    return 0;
}
