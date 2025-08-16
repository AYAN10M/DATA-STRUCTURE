#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, currentCapacity = 0, maxPassenger = 0;
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        currentCapacity -= a[i]; // Exiting passengers
        currentCapacity += b[i]; // Entering passengers
        if (currentCapacity > maxPassenger)
        {
            maxPassenger = currentCapacity;
        }
    }
    printf("%d", maxPassenger);
    return 0;
}
