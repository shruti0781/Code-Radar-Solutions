// Your code here...
#include<stdio.h>
int factorial(int n){
int fact=1;
for(int i=2;i<=n;i++)
{
    fact*=i;
}
return fact;
}
int combination(int n,int r){
    int comb;
    comb= factorial(n)/(factorial(n-r)*factorial(r));
    return comb;
}
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int k=0;k<a-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}