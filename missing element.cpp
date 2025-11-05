#include <stdio.h>

int main() {
    int a[100], n, i, total = 0, expected, missing;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    expected = (n + 1) * (a[0] + a[n - 1]) / 2; 
    missing = expected - total;

    printf("Missing element is: %d\n", missing);

}

