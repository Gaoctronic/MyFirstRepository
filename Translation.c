/*翻译（Translation）

编写程序可以把字母格式的电话号码翻译成数值格式：

Enter phone number: CALLATT

2255288

如果没有电话在身边,参考这里给出的字母在键盘上的对应关系：（2=ABC，3=DEF，4=GHI，5=JKL，6=MNO，7=PQRS，8=TUV，9=WXYZ）原始电话号码中的非字母字符（例如数字或标点符号）保持不变：

Enter phone number: 1-800-COL-LECT1-800-265-5328

可以假设任何用户输入的字母都是大写字母。

输出范例：

Enter phone number: 1-DCKS-A2D-OLED

1-3257-223-6533*/

#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'C') {
            putchar('2');
        } else if (ch >= 'D' && ch <= 'F') {
            putchar('3');
        } else if (ch >= 'G' && ch <= 'I') {
            putchar('4');
        } else if (ch >= 'J' && ch <= 'L') {
            putchar('5');
        } else if (ch >= 'M' && ch <= 'O') {
            putchar('6');
        } else if (ch >= 'P' && ch <= 'S') {
            putchar('7');
        } else if (ch >= 'T' && ch <= 'V') {
            putchar('8');
        } else if (ch >= 'W' && ch <= 'Z') {
            putchar('9');
        } else {
            putchar(ch);
        }
    }
    putchar('\n');

    return 0;
}
