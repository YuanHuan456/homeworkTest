/*
 * 学号：2604020124
 * 姓名：袁欢
 * 题目：Homework1 - 题目3 格式化输出练习
 */
#pragma execution_character_set("utf-8")
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("chcp 65001 > nul");

    printf("%6s %-12s %10s\n", "商品编号", "商品名称", "单价");
    printf("%6d %-12s %10.2f\n", 1, "铅笔", 1.50);
    printf("%6d %-12s %10.2f\n", 2, "笔记本", 5.80);
    printf("%6d %-12s %10.2f\n", 3, "橡皮", 0.75);
    printf("%6d %-12s %10.2f\n", 4, "圆规", 12.00);

    return 0;
}

