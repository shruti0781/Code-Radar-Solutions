#include <stdio.h>
int main() {
   int a,b;
   char d;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("\n%c",&d);
   if(d =='+')
   {
    printf("%d",a+b);
   }
   else if(d=='-')
   {
    printf("%d",a-b);
   }
   else if(d=='*')
   {
    printf("%d",a*b);
   }
   else if(d=='/')
   {
    printf("%d",a/b);
   }
}