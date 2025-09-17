#include <stdio.h>
#define MODE_C_TO_F 1
#define MODE_F_TO_C 2

float CelsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
float FahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(void) {
    float celsius, fahrenheit;
    int mode;
    printf("请输入数字以选择模式: 1.Celsius to Fahrenheit, 2.Fahrenheit to Celsius\n");
    scanf("%d", &mode);

    if(mode == MODE_C_TO_F){
        printf("请输入摄氏温度: ");
        scanf("%f", &celsius);
        fahrenheit = CelsiusToFahrenheit(celsius);
        printf("%.2f 摄氏度 = %.2f 华氏度\n", celsius, fahrenheit);
    } else if(mode == MODE_F_TO_C){
        printf("请输入华氏温度: ");
        scanf("%f", &fahrenheit);
        celsius = FahrenheitToCelsius(fahrenheit);
        printf("%.2f 华氏度 = %.2f 摄氏度\n", fahrenheit, celsius);
    } else {
        printf("无效的模式选择。\n");
        return 1;
    }

    return 0;
}