/* Copyright 2024 TUT */
#include <stdio.h>
#include <stdlib.h>

/* Description */

int main()
{
    int m = 0;
    // char   month[][10] = {{"January"},
    //                       {"Febuary"},
    //                       {"March"},
    //                       {"April"},
    //                       {"May"},
    //                       {"June"},
    //                       {"July"},
    //                       {"August"},
    //                       {"September"},
    //                       {"October"},
    //                       {"November"},
    //                       {"December"}};
    char  *month[] = {"January",
                      "Febuary",
                      "March",
                      "April",
                      "May",
                      "June",
                      "July",
                      "August",
                      "September",
                      "October",
                      "November",
                      "December"};
    char **mon;
    mon = month;

    printf("请输入月份对应的数字：");
    scanf("%d", &m);
    if (m > 0 && m < 13)
    {
        printf("%s\n", *(mon + m - 1));
    }
    else
    {
        printf("输入错误！\n");
    }


    return 0;
}
