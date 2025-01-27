#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>>(4*8-1)&1)
    {
        printf("Set");
    }
    else {
        printf("Not Set");
    }
}