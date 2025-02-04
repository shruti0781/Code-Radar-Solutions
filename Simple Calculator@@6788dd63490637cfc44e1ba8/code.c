#include <stdio.h>
int main() {
   int a,b,d,c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
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