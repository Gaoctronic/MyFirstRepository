#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*1.种子不变，随机数是固定的
      2.随机数的范围为：0 - 32767
    */

    srand(time(NULL)); // Seed the random number generator with the current time

    for (int i = 1; i <= 10; i++)
    {
        int random_number = rand() % 100 + 1; // Generate a random number between 1 and 100
        printf("%d\n", random_number);         // Print the random number
    }

    return 0;
}
