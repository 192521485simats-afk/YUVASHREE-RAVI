#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    printf("Repeated character indices:\n");

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                printf("Character '%c' repeated at indices %d and %d\n", str[i], i, j);
                break;
            }
        }
    }

    return 0;
}

