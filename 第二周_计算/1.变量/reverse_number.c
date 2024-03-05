#include <stdio.h>

int main() {
    int digit = 0;
    int decile = 0;
    int centile = 0;
    int var = 0;

    scanf("%d", &var);
    digit = (var / 100);
    decile = ((var / 10) % 10) * 10;
    centile = (var % 10) * 100;
    var = centile + decile + digit;

    printf("%d\n", var);

    return 0;
}