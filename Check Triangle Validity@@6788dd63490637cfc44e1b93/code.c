#include <stdio.h>
int main() {
    int a,b,c,d,e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d= a*a +b*b;
    e= c*c;
    if (d==e){
        printf("Valid");

    }
    else {
        printf("Invalid");
    }
   

}