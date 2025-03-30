int findUnsortedSubarray(int arr[], int n) {
    int left = -1, right = -1;
    
    // Step 1: Find the left boundary of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) { // First break in order
            left = i;
            break;
        }
    }

    // If array is already sorted, return 0
    if (left == -1) {
        return 0;
    }

    // Step 2: Find the right boundary of the unsorted subarray
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) { // Last break in order
            right = i;
            break;
        }
    }

    // Step 3: Return the length of the unsorted subarray
    return right - left + 1;
}
