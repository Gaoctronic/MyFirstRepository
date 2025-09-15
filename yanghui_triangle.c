#include <stdio.h>

int main(void)
{

    int n = 10;
    int triangle[20][20] = {0};

    for (int i = 0; i < n; i++)
    {
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < (n - i); k++)
        {
            printf("  ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("%4d", triangle[i][j]);
        }

        printf("\n");
    }

    return 0;
}
