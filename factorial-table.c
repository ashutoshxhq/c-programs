// WAP to print value of i for 10 times

#include <stdio.h>

int main()
{
    int i, j, n ;
    unsigned long int f = 1;
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("Table for %d:\n\n", i);

            for (j = 1; j < 10; j++)
            {
                // 2 * 1 = 2
                printf("%d * %d = %d\n", i, j, i * j);
                
                for (int k = i * j; k > 0; k--)
                {
                    f = f * k;
                }
                printf("\nFactorial for %d is %d\n",i * j, f);
                f = 1;
            }
        }
    }

    return 0;
}