/* Copyright 2024 TUT */
#include <stdio.h>

/* Description */

int main()
{
    typedef struct sk
    {
        int   a;
        float b;
    } data;

    typedef data *DATA[3];

    DATA array = {NULL};

    data a = {1, 1.0};
    data b = {2, 2.0};
    data c = {3, 3.0};

    array[0] = &a;
    array[1] = &b;
    array[2] = &c;

    for (int i = 0; i < 3; i++)
    {
        printf("%d:%f", array[i]->a, array[i]->b);
    }


    return 0;
}
