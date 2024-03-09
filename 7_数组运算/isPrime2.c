/* Copyright 2024 TUT */
#include <stdio.h>

/* Description */

int main()
{
    const int maxNumber = 25;
    int       isPrime[maxNumber];

    for (int i = 0; i < maxNumber; i++) {
        isPrime[i] = 1;
    }

    for (int j = 2; j < maxNumber; j++) {
        if (isPrime[j]) {
            for (int i = 2; i * j < maxNumber; i++) {
                isPrime[i * j] = 0;
            }
        }
    }

    for (int i = 2; i < maxNumber; i++) {
        if (isPrime[i]) {
            printf("%d\t", i);
        }
    }

    printf("\n");

    return 0;
}
