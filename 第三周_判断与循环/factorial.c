#include <stdio.h>

int main()
{
    int n = 0;
    printf("请输入一个数：");
    scanf("%d", &n);

    int fact = 1;
    int i;

    for (; n>1; --n) {
        printf("%d\n", n);
        fact *= n;
    }

    printf("%d", fact);

    return 0;
}