#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b= a>>(32-1)& 1;
    if (b&1|| b!=1)
    {
        printf("%d",b);
    }
    else{
        printf("%d",b);
    }
}