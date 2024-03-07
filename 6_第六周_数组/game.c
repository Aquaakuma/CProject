/* Copyright 2024 TUT */
#include <stdio.h>

/* Description */

int check_row(int board[3][3]) {
    int result = -1;
    int i, j;
    int num0fO, num0fX;
    // 检查行
    for (i = 0; i < 3 && result == -1; i++) {
        num0fO = num0fX = 0;
        for (j = 0; j < 3; j++) {
            if (board[i][j] == 1) {
                num0fX++;
            } else {
                num0fO++;
            }
        }
        if (num0fO == 3) {
            result = 0;
        } else {
            result = 1;
        }
    }

    return result;
}

int main() {
    int board[3][3];
    int i, j;
    int num0fX, num0FO;
    int result = -1; /* -1:平局；0:O赢；1:X赢 */

    // 读入矩阵
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("输入第%d行第%d列的值：", i, j);
            scanf("%d", &board[i][j]);
        }
    }

    return 0;
}
