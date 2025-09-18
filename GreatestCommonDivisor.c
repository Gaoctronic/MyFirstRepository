#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    if (m < n)
    {
        int temp = m;
        m = n;
        n = temp;
    }

    while (n != 0)
    {
        int r = m % n;
        m = n;
        n = r;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}