#include <stdio.h>

// Correct function declarations
void printArray(int A[], int n);
void bubbleSort(int b[], int n);

// Function to print the array
void printArray(int A[], int n) {
    for (int i = 0; i <= n; i++) {
        printf("%d ", A[i]);  // Space added for readability
    }
    printf("\n");  // Newline for better formatting
}

// Function to perform bubble sort
void bubbleSort(int b[], int n) {
    int round, i, temp;
    for (round = 1; round < n; round++) {  // `round <= n-1` changed to `round < n`
        for (i = 0; i < n - round; i++) {  // `i <= n-1-round` changed to `i < n-round`
            if (b[i] > b[i + 1]) {
                // Correct swapping logic
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
    printArray(b, n);  // Print sorted array inside sorting function
}

// Main function
