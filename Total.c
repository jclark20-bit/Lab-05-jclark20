#include <stdio.h>

int main(void)
{

    int N;
    int sum = 0;


    printf("Enter N please: ");
    scanf("%d", &N);


    for (int i = 1; i <=N; i++)
    {
        sum = sum + i;

    }
printf("sum = %d\n", sum);
    return 0;

}