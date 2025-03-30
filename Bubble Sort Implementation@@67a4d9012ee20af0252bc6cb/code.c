#include <stdio.h>

// Correct function declarations
void printArray(int A[], int n);
void bubbleSort(int b[], int n);

// Function to print array
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);  // Added space for readability
    }
    printf("\n");  // Move to a new line after printing
}

// Function to perform bubble sort
void bubbleSort(int b[], int n) {
    int round, i, temp;
    for (round = 1; round <= n - 1; round++) {
        for (i = 0; i < n - round; i++) {  // Fixed loop condition
            if (b[i] > b[i + 1]) {
                // Correct swap
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
    printArray(b, n);  // Print sorted array inside sorting function
}

// Main function
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    return 0;  // Indicate successful execution
}
