// Your code here...
int isPrime(int num){
    int i,j,v=1,z=0;
    for(i=1;i<=num;i++)
    {
        for(j=2;j<num;j++){
            if(j%i==0)
            break;
        
        if(j == num){
            return v;
        }
        else{
            return z;
        }
    }
}
}