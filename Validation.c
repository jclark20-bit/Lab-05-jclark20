#include <stdio.h>
int main (void)
{
    int number;
    printf("enter a number (1-10):")
    scanf("%d", &number);
    while (number < 1 ||number > 10)
    {
        printf("invalid please try again")
        scanf("%d", &number);

    }

    printf("valid number: %d\n", number);
    return 0;
}
