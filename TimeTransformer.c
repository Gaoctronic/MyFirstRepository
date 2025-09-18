/*24小时制-12小时制转换(24-hour to 12-hour)

编写一个程序，要求用户输入 24 小时制的时间，将其转换为 12 小时制的格式。

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM

Enter a 24-hour time: 0:01
Equivalent 12-hour time: 12:01 AM

注意，不要把12:00显示为0:00。*/

#include <stdio.h>

int main(void) {
    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        printf("Error, invalid time input.\n");
    } else {
        if (hours == 0) {
            printf("Equivalent 12-hour time: 12:%02d AM\n", minutes);
        } else if (hours < 12) {
            printf("Equivalent 12-hour time: %d:%02d AM\n", hours, minutes);
        } else if (hours == 12) {
            printf("Equivalent 12-hour time: 12:%02d PM\n", minutes);
        } else {
            printf("Equivalent 12-hour time: %d:%02d PM\n", hours - 12, minutes);
        }
    }

    return 0;
}