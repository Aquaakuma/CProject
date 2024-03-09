/* Copyright 2024 TUT */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Description */

int *search(int key, int array[], int len);

int main()
{
    const int max = 1000000;
    int      *seq = 0;
    int       key = 0;
    int       array[max];

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        array[i] = i * 2 + 1;
    }

    printf("数组大小：%ld\n", sizeof(array) / sizeof(array[0]));

    srand((unsigned)time(NULL));

    long int sum = 0;
    int      j = 0;
    for (int i = 0; i < max; i++)
    {
        key = 1 + rand() % (2000000);
        // printf("key=%d\n", key);

        seq = search(key, array, sizeof(array) / sizeof(array[0]));
        if (seq[0] == -1)
        {
            continue;
        }
        else
        {
            sum = sum + seq[1];
            j++;
        }
    }

    printf("二分搜索使用的平均次数是：%f", 1.0 * sum / j);
    return 0;
}

int *search(int key, int array[], int len)
{
    int left = 0;
    int right = len - 1;
    int mid = 0;
    static int ret[2];
    int i = 0;

    while (left < right)
    {
        mid = (left + right) / 2;
        if (key < array[mid])
        {
            right = mid - 1;
        }
        else if (key > array[mid])
        {
            left = mid + 1;
        }
        else
        {
            ret[0] = mid;
            break;
        }
        i++;
    }

    ret[1] = i;

    return &ret[0];
}
