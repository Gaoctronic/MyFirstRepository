//2025年9月25日于信软楼305 判断小宇一个数的所有质数
#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter a positive integer: ");

    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {

        int is_prime = 1; // Assume i is prime
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0; // i is not prime
                break;
            }
        }

        if (is_prime && i > 1)
        {
            printf("%d is a prime number\n", i);
        }
    }

    return 0;
}
