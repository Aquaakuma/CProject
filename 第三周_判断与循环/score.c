#include <stdio.h>

int main()
{
    const int PASS=60;
    int score;

    printf("请输入成绩：");
    scanf("%d", &score);

    printf("你输入的成绩是%d。\n", score);

    if (score<60) {
        printf("很遗憾，你的成绩没有及格。\n");
    } else {
        printf("祝贺你，你的成绩及格了。\n");
        printf("再见。\n");
    }

    return 0;
}