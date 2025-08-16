#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    int count = 0;

    if (n1 == n2)
    {
        count++;
    }
    if (n1 == n3 || n2 == n3)
    {
        count++;
    }
    if (n1 == n4 || n2 == n4 || n3 == n4)
    {
        count++;
    }

    printf("%d", count);
    return 0;
}
