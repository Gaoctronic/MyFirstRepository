/*出现次数（Number Occurrences）

修改如下程序，使其打印⼀份列表，显示出每个数字在数中出现的次数。

输出范例：

Enter a number: 41271092

Digit:	0	1	2	3	4	5	6	7	8	9
Occurrences:	1	2	2	0	1	0	0	1	0	1
*/

#include <stdio.h>

int main(void)
{
    int digit;
    int digitCounts[10] = {0};

    printf("Enter a number: ");
    while ((digit = getchar()) != '\n')
    {
        if (digit >= '0' && digit <= '9')
        {
            digitCounts[digit - '0']++;
        }
    }

    printf("Digit:\t");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", i);
    }

    printf("\n");

    printf("Occurrences:\t");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", digitCounts[i]);
    }

    return 0;
}
