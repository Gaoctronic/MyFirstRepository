//2025年9月25日于信软楼305
#include <stdio.h>
#include <tgmath.h>

#define MUL(a,b) ((a)*(b))
#define isEven(n) ((n) % 2 == 0)
#define isOdd(n) ((n) % 2 == 1)

// This function provides an area of a valid triangle.
float AreaOfTriangle(float a, float b, float c)
{

    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        return -1; // Invalid triangle sides
    }

    float s = (a + b + c) / 2;
    float area_expr = s * (s - a) * (s - b) * (s - c);
    return sqrt(area_expr);
}

// This function prints the multiplication table from 1 to 9.
void PrintMulTable(void)
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d\t", j, i, i * j);
        }
        printf("\n");
    }
}

// This function calculates the hypotenuse of a right triangle given the other two sides.
float Hypotenuse(float a, float b)
{
    return sqrt(a * a + b * b);
}

int main(void)
{
    float a = 3.0, b = 4.0, c = 5.0;
    double area = AreaOfTriangle(a, b, c);
    if (area != -1)
    {
        printf("Area of triangle with sides %.2f, %.2f, %.2f is: %.2f\n", a, b, c, area);
    }
    else
    {
        printf("Invalid triangle sides.\n");
    }

    printf("Multiplication Table:\n");
    PrintMulTable();

    return 0;
}
