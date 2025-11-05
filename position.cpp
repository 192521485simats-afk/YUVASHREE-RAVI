#include <stdio.h>

int main() {
    int a[100], n, i, search, f = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (a[i] == search) {
            printf("Element %d found at position %d \n", search, i );
            f = 1;
        }
    }

    if (!f) {
        printf("Element %d not found in the array.\n", search);
    }

}

