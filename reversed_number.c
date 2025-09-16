// This program reverses the digits of an integer input by the user.
// It reads an integer, processes it to reverse its digits, and prints the result.
#include <stdio.h>

int main(void)
{
    int number, reversed = 0;

    printf("请输入一个整数: ");
    scanf("%d", &number);

    while (number != 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    printf("反转后的整数是: %d\n", reversed);

    return 0;
}
