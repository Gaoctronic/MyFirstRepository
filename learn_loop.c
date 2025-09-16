// 2025年9月25日于208 计算所有各位数字之和为15的数
#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 1000; i++)
    {
        int number = i;
        int count = 0;

        while ((number / 10) != 0)
        {
            count = count + (number % 10);
            number = number / 10;
        }

        if (count + number == 15)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
