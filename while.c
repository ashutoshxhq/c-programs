// WAP to generate multiplication table using while and do while loop

#include <stdio.h>

int main()
{
    int n, i=1;
    scanf("%d", &n);
    do
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    } while (i <= 10);

    return 0;
}