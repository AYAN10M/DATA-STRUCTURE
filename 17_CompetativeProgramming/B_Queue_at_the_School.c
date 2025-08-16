#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char s[n];
    scanf("%s", s);
    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    printf("%s", s);
    return 0;
}