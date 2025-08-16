#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);
    while (test_case > 0)
    {
        int n, m;
        scanf("%d %d",&n, &m);

        if (m > n)
        {
            printf("%d\n", m);
        }
        else if (m < n)
        {
            printf("%d\n", n);
        }
        else
        {
            printf("%d\n", m);
        }
        
        test_case--;
    }
    return 0;
}