#include <stdio.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);
    while (test_case--)
    {
        int num1, num2, num3;
        scanf("%d %d %d", &num1, &num2, &num3);
        if (num1 == num2 + num3 || num2 == num1 + num3 || num3 == num1 + num2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}