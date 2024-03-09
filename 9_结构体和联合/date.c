/* Copyright 2024 TUT */
#include <stdio.h>

/* Description */

int main()
{
    struct date
    {
        int year;
        int month;
        int day;
    } today = {2024, 3, 9};

    struct date *p = &today;


    printf("%i年%i月%i日\n", p->year, p->month, p->day);

    return 0;
}
