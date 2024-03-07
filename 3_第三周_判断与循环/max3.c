/* Copyright 2024 TUT */
#include <stdio.h>

int main() {
    int a, b, c;

    printf("请输入两个整数：");
    scanf("%d %d %d", &a, &b, &c);

    int max = 0;
    if (a > b) {
        if (a > c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if (b > c) {
            max = b;
        } else {
            max = c;
        }
    }

    printf("大的那个是%d\n", max);

    return 0;
}
