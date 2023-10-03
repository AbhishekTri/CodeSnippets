vector<int> sieve(int r) {
    vector<bool> isPrime(r+1, true);

    for(int i = 2; i <= r; i++) {
        if(isPrime[i] == true) {
            for(int j = i*i; j<=r; j+=i) {
                isPrime[j] = false;
            }
        }
    }    
    vector<int> primes;
    for(int i = 2; i<=r; i++) {
        if(isPrime[i])
            primes.push_back(i);
    }
    return primes;
}
