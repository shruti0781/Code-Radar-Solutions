#include <stdio.h>

int main() {
    int i, j, rows;

    // Get the number of rows for the pyramid from the user
    printf("Enter the number of rows for the full pyramid: ");
    scanf("%d", &rows);

    // Loop for each row
    for (i = 1; i <= rows; i++) {
        // Loop to print spaces before stars in each row
        for (j = 1; j <= rows - i; j++) {
            printf(" ");  // Print spaces for proper alignment
        }

        // Loop to print stars in each row
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");  // Print stars
        }

        // Move to the next line after completing each row
        printf("\n");
    }

    return 0;
}
