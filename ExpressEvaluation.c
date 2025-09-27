/*表达式求值（Expression Evaluation）

编写程序对表达式求值。

Enter an expression: 1+2.5*3
Value of expression: 10.5


表达式中的操作数是浮点数，运算符是+、-、*和/。表达式从左向右求值（所有运算符的优先级都⼀样）。


输出范例：


Enter an expression: 2+3*4-5/2
Value of expression: 7.5
*/

#include <stdio.h>

int main(void)
{
    double result, num;
    char operator;

    printf("Enter an expression: ");

    scanf("%lf", &result);

    while (scanf(" %c", &operator) == 1)
    {
        if (operator == '\n') {
            break;
        }
        
        if (scanf("%lf", &num) != 1)
        {
            break;
        }
        
        switch (operator)
            {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                result /= num;
                break;
            default:
                break;
            }
    }
    
    printf("Value of expression: %.6lf\n", result);

    return 0;
}
