// Your code here...
#include <stdio.h>

int main() {
    int i, j, n,a;
    scanf("%d", &n);
    a=65;
    for (i = 1; i <= n; i++) {
       
        for (j = 1; j <= n; j++) {
            if (j>=1&&j<=n+1-i) {
                printf("%c ",a);
                a++;
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
