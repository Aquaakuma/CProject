/* Copyright 2024 TUT */
#include <stdio.h>
/*
辗转相除法：如果b等于0，计算结束，a就是最大公约数；
否则，计算a除以b的余数，让a等于b，而b等于那个余数；
回到第一步
a b i
12 18 12
18 12 6
12 6 0
6 0
*/

int main() {
    int a = 0;
    int b = 0;
    int gcd = 0;
    int i = 0;

    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        i = a % b;
        a = b;
        b = i;
    }

    printf("%d", a);

    return 0;
}
