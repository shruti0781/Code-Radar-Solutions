#include <stdio.h>

int main()
{
   int temp,i,n,shift,l;
   scanf("%d",&n);
   int a[n];
   for(l=1;l<=n;l++){
    scanf("%d",&a[l]);
   }
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