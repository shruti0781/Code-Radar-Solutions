int findUnsortedSubarray(int b[],int n){
int round,i,count=0;

    for(i=0;i<=n-1;i++){
        if(b[i]>b[i+1]){
            count++;
        }
    }
   return count;
}

