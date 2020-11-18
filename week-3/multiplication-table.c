#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);

    printf("Table for %d:\n\n", n);

    for (j = 1; j <= 10; j++)
    {
        printf("%d * %d = %d\n", n, j, n * j);
    }

    return 0;
}