#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // n is the no of operation
    // result is my output
    int n, result = 0;
    scanf("%d", &n);
    // creating array where user will give their input i.e operation and variable
    char operation[4];
    while (n > 0)
    {
        scanf("%s",operation);
        if (operation[1] == '+')
        {
            ++result;
        }
        else
        {
            --result;
        }

        n--;
    }
    printf("%d", result);
    return 0;
}