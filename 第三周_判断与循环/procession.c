#include <stdio.h>

int main() {
    // 初始化
    int n = 0;
    int i = 1;

    // 读入班级人数
    scanf("%d", &n);
    do {
        printf("%d ", i);
        i += 2;
    }while ( i<=n );


    return 0;
}