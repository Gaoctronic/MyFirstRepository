#include <stdio.h>

// Sum of first n natural numbers using recursion
unsigned int RecursiveFunction(unsigned int n);
// Fibonacci sequence using recursion
unsigned int Fibonacci(unsigned int n);


unsigned int RecursiveFunction(unsigned int n) {
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + RecursiveFunction(n - 1);
    }
}

unsigned int Fibonacci(unsigned int n) {
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
