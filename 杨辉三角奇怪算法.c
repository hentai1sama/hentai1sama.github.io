#include <stdio.h>
void main()
{
    int s = 1, h;                    // 数值和高度
    int i, j;                        // 循环计数
    scanf_s("%d", &h);                 // 输入层数
    printf("1\n");                   // 输出第一个 1
    for (i = 2; i <= h; s = 1, i++)         // 行数 i 从 2 到层高
    {
        printf("1 ");                // 第一个 1
        for (j = 1; j <= i - 2; j++) // 列位置 j 绕过第一个直接开始循环
            printf("=%d ", (s = (i - j) * s / j));
        printf("1\n");               // 最后一个 1，换行
    }
}