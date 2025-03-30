int isPrime(int num) {
    if (num < 2) {
        return 0;  // Numbers less than 2 are not prime
    }

    for (int i = 2;  i <= num; i++) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) {
            return 0;  // If divisible, it's not a prime number
        }
    }
    
    return 1;  // If no divisors found, it's prime
}