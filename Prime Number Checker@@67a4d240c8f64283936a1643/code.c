int isPrime(int num) {
    if (num < 2) {
        return 0;  // Numbers less than 2 are not prime
    }
    int i;
    for (i = 2;  i <= num-1; i++)  // Check divisibility up to sqrt(num)
        if (num % i == 0) 
             break;  // If divisible, it's not a prime number
        
        if(num == i)
            return 1;
        
        else 
        return 0;
    
}