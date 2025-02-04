#include <stdio.h>
int main() {
   int a,b,d;
   char c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%c",&c);
   if(d=='+')
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