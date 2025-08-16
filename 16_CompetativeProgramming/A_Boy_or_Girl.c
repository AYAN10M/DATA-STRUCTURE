#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char name[101];
    scanf("%s", name);
    int i, j, count = 0;
    for (i = 0; i < strlen(name); i++)
    {
        int flag = 1;
        for (j = 0; j < i; j++)
        {
            if (name[i] == name[j])
            {
                flag = 0;
                break;
            }

        }
        if (flag == 1)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}