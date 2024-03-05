#include <stdio.h>

int main() {
    // 初始化
    int num = 0;    // 读入的数字
    int seq = 1;    // 序号
    int fea = 0;    // 特征值
    int count = 0;    // 二进制数字
    int i = 0;


    // 读入数字
    scanf("%d", &num);
    do {
        if ( (num%10%2)==(seq%2)) {
            count = 1;
            for (i=seq; i>1; i--) {
                count *= 2;
            }
            fea += count;
        }
        num /= 10;
        seq++;
    }while ( num>0 );

    printf("%d", fea);

    return 0;
}