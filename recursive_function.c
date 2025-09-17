#include <stdio.h>

// Sum of first n natural numbers using recursion
unsigned int recursive_function(unsigned int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + recursive_function(n - 1);
    }
}

// Fibonacci sequence using recursion
unsigned int fibonacci(unsigned int n)
{
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
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
