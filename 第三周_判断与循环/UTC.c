#include <stdio.h>

int main() {
    // 初始化BJT&UTC
    int bjt = 0;
    int utc = 0;
    int hour = 0;
    int minute = 0;

    // 读入BJT
    scanf("%d", &bjt);

    if ( bjt>0 && bjt<2359 ) {
        minute = bjt % 100;
        hour = bjt / 100 - 8;
        if ( hour<0 ) {
            hour = hour + 24;
        }
    }

    utc = hour * 100 + minute;

    printf("%d", utc);

    return 0;
}