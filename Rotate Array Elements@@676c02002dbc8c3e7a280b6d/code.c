#include <stdio.h>

int main()
{
   int temp, i, n, shift, l;
   
   // Input the array size and shift count
   scanf("%d", &n);
   scanf("%d", &shift);

   int a[n];

   // Corrected input loop (indexing starts from 0)
   for (l = 0; l < n; l++) {
       scanf("%d", &a[l]);
   }

   // Perform right shifts
   while (shift) {
       temp = a[n - 1];

       for (i = n - 1; i >= 1; i--) {
           a[i] = a[i - 1];
       }
       a[0] = temp;
       shift--;
   }

   // Print the shifted array with spaces
   for (i = 0; i < n; i++) {
       printf("%d ", a[i]);
   }

   return 0;
}
