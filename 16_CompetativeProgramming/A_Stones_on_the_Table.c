#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // number of stone
    int n;
    scanf("%d", &n);
 
    // array where we will store the data of stone colors
    char s[n + 1];
    scanf("%s", s);
    int i, j, count = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i - 1] == s[i])
        {
            count++;
        }
        else
        {
            continue;
        }
        
        
    }
 
    printf("%d", count);
    return 0;
}