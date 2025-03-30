// Your code here...
#include<stdio.h>
void printArray();
void bubblesort();
void printArray(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d",A[i]);
    }
}
void bubbleSort(int b[],int n){
    int round,i,temp;
    for(round=1;round<=n-1;round++)
    {
        for(i=0;i<=n-1-round;i++){
            if(b[i]>b[i+1])
            {
                temp=b[i+1];
                b[i+1]=b[i];
                b[i+1]=temp;
            }
        }
    }
    printArray(b,n);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
}