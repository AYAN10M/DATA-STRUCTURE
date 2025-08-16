#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int i, j, swap;
    for (i = 0; i < strlen(s); i = i + 2)
    {
        for (j = i + 2; j < strlen(s); j = j + 2)
        {
            if (s[i] > s[j])
            {
                swap = s[i];
                s[i] = s[j];
                s[j] = swap;
            }
            else if (s[i] == s[j])
            {
                continue;
            }
        }
    }
    printf("%s", s);
    return 0;
}