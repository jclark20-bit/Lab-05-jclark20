#include <stdio.h>

int maint(void)
{
    int N;
    printf("enter positive integer:");
    scanf("%d", &N);

    for (int i = 1; i <=N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even\n", i);
        }
        else
        {
            printf("%d is odd\n", i);
        }
    }
    return 0;
}

