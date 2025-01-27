#include <stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   b= & a;
   if(a==b)
   {
    printf("Set");
   }
   else
   {
    printf("Not Set");
   }
 
}