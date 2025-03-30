// Your code here...
#include <stdio.h>

int main() {
    int i, j, n,k,v;
    scanf("%d", &n);
     v=(n+1)/2;
    for (i = 1; i <= 2*n-1; i++) {
        i<=v?k++:k--;
        for (j = 1; j <= n; j++) {
            if (j>=v+1-k && j<= v+k-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
