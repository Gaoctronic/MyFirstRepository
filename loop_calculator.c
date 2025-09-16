// 2025年9月25日于208 计算1^1+2^2+...+10^10
#include <stdio.h>

int main(void)
{
    long long sum = 0;
    for (int i = 1; i <= 10; i++)
    {   
        long long power = i;
        for (int j = 0; j < i; j++)
        {
            power = power * i;
        }

        sum = sum + power;
    }

    printf("The final sum is: %lld\n", sum);
    return 0;
}
