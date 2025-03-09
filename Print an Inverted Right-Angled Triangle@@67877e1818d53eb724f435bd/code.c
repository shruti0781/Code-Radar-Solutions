// C program to print the inverted right half pyramid of
// stars
#include <stdio.h>

int main()
{
    int rows ;
    scanf("%d",&rows);

    // first loop to print all rows
    for (int i = 0; i < rows; i++) {

        // first inner loop to print the * in each row
        for (int j = 0; j < rows - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}