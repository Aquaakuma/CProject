/* Copyright 2024 TUT */
#include <stdio.h>

/* Description */

int main() {
    int count[10];
    int x = 0;
    int i = 0;

    for (i = 0; i < 10; i++) {
        count[i] = 0;
    }

    scanf("%d", &x);

    while (x != -1) {
        if (x >= 0 && x <= 9) {
            count[x] = count[x] + 1;
        } else {
            printf("输入的数%d不属于0-9。\n", x);
            break;
        }

        scanf("%d", &x);
    }

    for (i = 0; i < 10; i++) {
        if (count[i] != 0) {
            printf("数字%d出现%d次。\n", i, count[i]);
        }
    }

    return 0;
}
