// Your code here...
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(((i>1)?j<=1:j<=n)||(i==n)?j>=(n+i)-i:j<=n){
                printf("*");
            }
            else{
                printf(" ");

            }
        }
        printf("\n");
    }
   
}