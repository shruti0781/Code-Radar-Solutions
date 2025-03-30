// Your code here...
#include <stdio.h>

int main() {
    int i, j, n,k;
    scanf("%d", &n);

    for (i = 1; i <= 2*n-1; i++) {
        i<=((n+1)/2)?(k=i):(k=(n+1)-i);
        for (j = 1; j <= n; j++) {
            if (j>=((n+1)/2)+1-k && j<=((n+1)/2)+k-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
