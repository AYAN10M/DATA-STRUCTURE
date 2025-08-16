#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = n, sum = 0;
    while (i--)
    {
        int drink;
        scanf("%d", &drink);
        sum += drink;
    }
    printf("%lf\n", (double) sum/n);
    return 0;
}