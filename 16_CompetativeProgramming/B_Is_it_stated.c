#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[101];
        scanf("%s", str);
        int flag = 0;
        for (int i = 0; i < strlen(str) - 1; i++)
        {
            char substring[3];
            substring[0] = str[i];
            substring[1] = str[i + 1];
            substring[2] = '\0';
            if (strcmp(substring, "it") == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
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
