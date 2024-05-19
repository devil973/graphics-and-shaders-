#ifndef FUNCTION_H
#define FUNCTION_H

int factorial(int n) {
    if (n < 0) return -1;
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
double power(int i, int j) {
    if (j == 0) return 1;
    else if(j==1) return i;
    else if (j < 0) return -1; 
    else{
        return i * power(i, j - 1);
}
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

#endif
