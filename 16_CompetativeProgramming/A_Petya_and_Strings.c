#include <stdio.h>
#include <string.h>

int main() {
    char presents1[101];
    char presents2[101];

    scanf("%s", presents1);
    scanf("%s", presents2);

    int i = 0;
    int result = 0;

    while (presents1[i] != '\0' && presents2[i] != '\0') {
        int ascii_1 = presents1[i];
        int ascii_2 = presents2[i];

        // Convert uppercase to lowercase by adjusting ASCII values
        if (ascii_1 >= 'A' && ascii_1 <= 'Z') {
            ascii_1 += 32;
        }
        if (ascii_2 >= 'A' && ascii_2 <= 'Z') {
            ascii_2 += 32;
        }

        if (ascii_1 != ascii_2) {
            result = (ascii_1 > ascii_2) ? 1 : -1;
            break;
        }

        i++;
    }

    // If all characters are equal so far but one string has ended before the other
    if (result == 0) {
        if (strlen(presents1) == strlen(presents2)) {
            result = 0; // Both strings are equal
        } else {
            result = (strlen(presents1) > strlen(presents2)) ? 1 : -1;
        }
    }

    printf("%d", result);
    return 0;
}
