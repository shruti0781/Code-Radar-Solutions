// C program to print the inverted right half pyramid of
// stars
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<rows-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}