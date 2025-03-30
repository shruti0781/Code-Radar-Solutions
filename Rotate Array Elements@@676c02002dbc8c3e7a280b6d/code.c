#include<stdio.h>
int main(){
    int a,i,k,temp;
    scanf("%d",&a);
    int arr[a];
    for(i=1;i<=a;i++){
        scanf("%d",&arr[i]);
    }
scanf("%d",&k);
while(k){
    temp=arr[a-1];
    for(i=a-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    k--;
}
for(i=0;i<=a-1;i++){
    printf("%d",arr[i]);
}
}