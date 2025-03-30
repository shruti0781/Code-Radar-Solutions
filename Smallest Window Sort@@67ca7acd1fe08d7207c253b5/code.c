int findUnsortedSubarray(int b[],int n){
int round,i,count=0;
for(round=1;round<=n-1,round++)
    for(i=0;i<=n-1;i++){
        if(b[i]>b[i+1]){
            count++;
        }
    }
   return count;
}

