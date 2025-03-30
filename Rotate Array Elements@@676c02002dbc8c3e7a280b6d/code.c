#include <stdio.h>

int main()
{
   int temp,i,n,shift;
   scanf("%d",&n);
   int a[n];
   for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
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