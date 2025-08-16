#include <stdio.h>
#include <string.h>

int main()
{
    char word[1001];
    scanf("%s", word);
    int first_letter = word[0];
    if (first_letter > 96)
    {
        first_letter = first_letter - 32;
        word[0] = (char)first_letter;
    }
    printf("%s", word);
}