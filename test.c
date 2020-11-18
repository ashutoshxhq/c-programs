// WAP to print value of i for 10 times

#include <stdio.h>

int main()
{
    int i, j, n, f = 1;
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            
            for (int k = i; k > 0; k--)
            {
                f = f * k;
            }
            printf("\nFactorial for %d is %d\n", i, f);
            printf("Table for %d:\n\n", i);
            f = 1;
            for (j = 1; j < 10; j++)
            {
                printf("%d * %d = %d\n", i, j, i * j);
            }
        }
    }

    return 0;
}