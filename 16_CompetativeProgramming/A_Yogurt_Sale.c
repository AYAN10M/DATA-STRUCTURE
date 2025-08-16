#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        int cost1 = n * a;
        
        int cost2 = (n / 2) * b + (n % 2) * a;

        int result = (cost1 < cost2) ? cost1 : cost2;
        printf("%d\n", result);
    }

    return 0;
}
