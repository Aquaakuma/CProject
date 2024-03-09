#include <stdio.h>


// 定义一个简单的结构体

struct MyStruct
{

    char a; // 1 byte

    int b; // 4 bytes

    char c; // 1 byte
};


int main()
{

    // 创建一个结构体变量

    struct MyStruct s;


    // 打印结构体的大小

    printf("Size of struct: %zu bytes\n", sizeof(s));


    // 打印结构体成员的地址差

    printf("Difference in address between 'a' and 'b': %zu bytes\n",
           (char *)&s.b - &s.a);

    printf("Difference in address between 'b' and 'c': %zu bytes\n",
           &s.c - (char *)&(s.b));
    // |12|
    // |11|
    // |10|
    // |9|   char c
    // |8|
    // |7|
    // |6|
    // |5|   int b
    // |4|
    // |3|
    // |2|
    // |1|   char a


    // 打印结构体成员的大小

    printf("Size of 'a': %zu bytes\n", sizeof(s.a));

    printf("Size of 'b': %zu bytes\n", sizeof(s.b));

    printf("Size of 'c': %zu bytes\n", sizeof(s.c));


    return 0;
}
