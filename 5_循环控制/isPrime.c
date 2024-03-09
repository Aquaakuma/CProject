/* Copyright 2024 TUT */
#include <stdio.h>

/* Description */

int main() {
    int num = 0;
    int i = 0;
    int isPrime = 1;

    for (num = 1; num <= 100; num++) {
        int isPrime = 1;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", num);
        }
    }

    return 0;
}
