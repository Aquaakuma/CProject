/* Copyright 2024 TUT */
#include <stdio.h>

/* Description */

int search(int key, int array[], int len);

int main()
{
    const int max = 1000000;
    int       seq = 0;
    int       key = 0;
    int       array[max];

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        array[i] = i;
    }

    printf("数组大小：%ld", sizeof(array) / sizeof(array[0]));

    printf("请输入一个数：");
    scanf("%d", &key);

    seq = search(key, array, sizeof(array) / sizeof(array[0]));
    if (seq == -1)
    {
        printf("没有找到这个数！");
    }
    else
    {
        printf("位于数组第%d位。\n", seq + 1);
        printf("数值是：%d\n", array[seq]);
    }

    return 0;
}

int search(int key, int array[], int len)
{
    int result = -1;
    int left = 0;
    int right = len - 1;
    int mid = 0;
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
            result = mid;
            break;
        }
        i++;
    }

    printf("搜索了%d次！", i);

    return result;
}
