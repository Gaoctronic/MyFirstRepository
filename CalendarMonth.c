/*日历（Calendar Month）

编写程序显示单月的日历。用户指定这个月的天数和该月起始日是星期几。

输出范例：

Enter number of days in month: 31

Enter starting day of the week(1=Sun, 7=Sat): 3

日 一	二	三	四	五	六
        1	2  3   4  5
 6	 7	 8	 9	10	11	12
13	14	15	16	17	18	19
20	21	22	23	24	25	26
27	28	29	30	31
*/

/*#include <stdio.h>

int main(void) {
    int days, startDay;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week(1=Sun, 7=Sat): ");
    scanf("%d", &startDay);

    int arraySize = (startDay + days) > 35? 42 : 35;

    int dayArray[42] = {0};
    
    for (int i = startDay - 1; i < (startDay + days); i++)
    {
        dayArray[i] = i - startDay + 2;
    }
    
    printf("日 一 二 三 四 五 六\n");

    for (int i = 0; i < 42; i++)
    {
        if (dayArray[i] == 0)
        {
            printf("   ");
        }
        else
        {
            printf("%3d", dayArray[i]);
        }

        if ((i + 1) % 7 == 0)
        {
            printf("\n");
        }
    }
}*/

#include <stdio.h>

int main(void) {
    int days, starting;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting);

    // 打印表头
    printf("日\t一\t二\t三\t四\t五\t六\n");

    // 先打印起始日之前的空格
    for (int i = 1; i < starting; i++) {
        printf("\t");
    }

    // 打印日期
    for (int day = 1; day <= days; day++) {
        printf("%d\t", day);

        // 如果到周六就换行
        if ((day + starting - 1) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n"); // 保证最后一行换行
    return 0;
}