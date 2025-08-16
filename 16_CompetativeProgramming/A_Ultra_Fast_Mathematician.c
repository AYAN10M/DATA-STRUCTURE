#include <stdio.h>
#include <string.h>

int main()
{
    char num1[105], num2[105], num3[105];
    scanf("%s %s", num1, num2);

    int len = strlen(num1);
    
    for (int i = 0; i < len; i++)
    {
        if (num1[i] != num2[i])
            num3[i] = '1';
        else
            num3[i] = '0';
    }
    num3[len] = '\0'; // Null-terminate the string

    printf("%s\n", num3);

    return 0;
}
