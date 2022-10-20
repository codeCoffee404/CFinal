#include <stdio.h>
//编程求1-100这100个整数中9出现的次数
int main()
{
    int a = 1;
    int b = 0;
    for (a = 1; a <= 100; a++)
    {
        if (a % 10 == 9)    // 求个位出现9的次数
            b++;
        if (a / 10 == 9)     // 求十位出现9的次数
            b++;
    }
    printf("9出现的次数为：%d", b);
    return 0;
}

