#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a =='A')
    {
        printf("Excellent");
    }
     if(a =='B')
    {
        printf("Good");
    }
     if(a =='C')
    {
        printf("Average");
    }
     if(a =='D')
    {
        printf("Below Average");
    }
     if(a =='F')
    {
        printf("Invalid grade");
    }
}