#include <stdio.h>

int main() {
    int i = 7;
    int n = 2; // Start from 2 because every number is divisible by 1

    // The loop runs ONLY as long as i is not divisible by n
    while (i % n != 0) {
        n++;
    }

    // If the first number that finally divides i is i itself, it's prime
    if (n == i) {
        printf("%d is prime", i);
    } else {
        printf("%d is not prime", i);
    }

    return 0;
}