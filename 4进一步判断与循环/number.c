/* Copyright 2024 TUT */
#include <stdio.h>

int main() {
    // 初始化
    int number = 0;
    int odd = 0;
    int even = 0;

    scanf("%d", &number);   // 读入mumber
    while (number != -1) {
        if (number % 2 == 1) {
            odd += 1;
        } else {
            even += 1;
        }
        scanf("%d", &number);  // 读入mumber
    }

    printf("%d %d", odd, even);

    return 0;
}
