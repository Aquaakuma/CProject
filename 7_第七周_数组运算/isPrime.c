/* Copyright 2024 TUT */
#include <stdio.h>

/* Description */

int isPrime(int x, int knowPrimes[], int numberofKnowPrime);


int main()
{
    const int number = 10;
    int prime[number]; // 不能在这里用变量定义数组的同时初始化
                       // 初始化是确定的，变量是编译时才确定的。
    int count = 1;
    int i = 3;

    prime[0] = 2;
    for (int j = 1; j < number; j++)
    {
        prime[i] = 0;
    }


    while (count < number)
    {
        if (isPrime(i, prime, count))
            prime[count++] = i;
        {
            printf("i=%d\tcnt=%d\t", i, count);
            for (int i = 0; i < number; i++)
            {
                printf("%d\t", prime[i]);
            }
            printf("\n");
        }
        i++;
    }

    for (int i = 0; i < number; i++)
    {
        printf("%d", prime[i]);
        if ((i + 1) % 5)
            printf("\t");
        else

            printf("\n");
    }

    return 0;
}


int isPrime(int x, int knowPrimes[], int numberofKnowPrime)
{
    int ret = 1;
    for (int i = 0; i < numberofKnowPrime; i++)
    {
        if (x % knowPrimes[i] == 0)
        {
            ret = 0;
            break;
        }
    }

    return ret;
}
