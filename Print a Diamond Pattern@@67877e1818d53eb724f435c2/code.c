#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half (including middle row)
    for (int i = 1; i <= n * 2 - 1; i++) {
        // Calculate number of stars in each row
        int stars = (i <= n) ? 2 * i - 1 : 2 * (n * 2 - i) - 1;

        // Print leading spaces
        int spaces = (n * 2 - 1 - stars) / 2; // Adjust spaces to center the stars
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
