#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;

    char poly1[] = "Icosahedron";
    char poly2[] = "Cube";
    char poly3[] = "Tetrahedron";
    char poly4[] = "Dodecahedron";
    char poly5[] = "Octahedron";

    while (n--)
    {
        char str[20];
        scanf("%s", str);

        if (strcmp(str, poly1) == 0)
        {
            count += 20;
        }
        else if (strcmp(str, poly2) == 0)
        {
            count += 6;
        }
        else if (strcmp(str, poly3) == 0)
        {
            count += 4;
        }
        else if (strcmp(str, poly4) == 0)
        {
            count += 12;
        }
        else if (strcmp(str, poly5) == 0)
        {
            count += 8;
        }
    }

    printf("%d", count);
    return 0;
}
