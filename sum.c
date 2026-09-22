#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;

    printf("Enter a number (0 to stop): ");
    scanf("%d", &number);

    while (number != 0)
    {
        sum = sum + number;

        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
    }

    printf("Sum = %d\n", sum);

    return 0;
}