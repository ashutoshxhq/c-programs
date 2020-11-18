// WAP to print value of i for 10 times

#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("Table for %d:\n\n", i);

            for (j = 1; j < 10; j++)
            {
                printf("%d * %d = %d\n", i, j, i*j);
            }
        }
    }

    return 0;
}