#include <stdio.h>

int main()
{
   int a[5]={1,2,3,4,5};
   int temp,i,n=5,shift=5;
   while(shift){
   temp=a[n-1];
   for(i=n-1;i>=1;i--){
       a[i]=a[i-1];
   }
   a[0]=temp;
   
   shift--;
}
for(i=0;i<=n-1;i++)
   printf("%d",a[i]);
}