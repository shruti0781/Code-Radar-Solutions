#include <stdio.h>
int main() {
   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   if (a>=18 && b==1)
   {
    printf("Eligible");
   }
   else if(a<18 && a==1 || a==0)
   {
    printf("Not Eligible");
   }
}