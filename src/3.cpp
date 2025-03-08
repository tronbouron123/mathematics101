// Code to generate a random number between 1 and 100
int getRandomNumber() {
    return rand() % 100 + 1;
}

// Code to check if a number is prime or not
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
