//杨辉三角的数组处理与打印
#include <stdio.h>

int main(void)
{


    int n;
    printf("请输入杨辉三角的行数(1-15): ");
    scanf("%d", &n);

    if (n < 1 || n > 15)
    {
        printf("行数输入错误!\n");
        return 1;
    }

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
        for (int k = 0; k < (n - i - 1); k++)
        {
            printf("   ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("%6d", triangle[i][j]);
        }

        printf("\n");
    }

    return 0;
}
