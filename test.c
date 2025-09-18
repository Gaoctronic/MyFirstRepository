#include <stdio.h>

int main(void)
{
    int choice;
    printf("Enter numerical grade: ");
    scanf("%d", &choice);

    if (choice > 100 || choice < 0)
    {
        printf("Error, grade must be between 0 and 100.");
    }
    else
    {
        choice = choice / 10;
        switch (choice)
        {
        case 10:
            printf("Letter grade: A");
            break;
        case 9:
            printf("Letter grade: A");
            break;
        case 8:
            printf("Letter grade: B");
            break;
        case 7:
            printf("Letter grade: C");
            break;
        case 6:
            printf("Letter grade: D");
            break;
        default:
            printf("Letter grade: F");
            break;
        }
    }

    return 0;
}