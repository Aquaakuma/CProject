/* Copyright 2024 TUT */
#include <stdio.h>

/* Description */

int main()
{
    int num = 0;
    int mask = 1;
    int t = 0;

    scanf("%d", &num);

    t = num;
    while (t > 9)
    {
        t = t / 10;
        mask = mask * 10;
    }

    do
    {
        printf("%d", num / mask);
        num = num % mask;
        if (mask > 9)
        {
            printf(" ");
        }
        mask = mask / 10;
    } while (mask != 0);

    printf("\n");

    return 0;
}
