#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int i, l, n;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        gets(s);
        l = strlen(s);
        if (l <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c%d%c\n", s[0], l - 2, s[l - 1]);
        }
    }
    return 0;
}