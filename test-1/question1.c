#include <stdio.h>

int main()
{
    int a, b, c, temp;
    printf("Enter the vlaue of A,C:\n");
    scanf("%d%d", &a, &c);
    do
    {
        printf("Enter the vlaue of B:\n");
        scanf("%d", &b);

        if (b >= 100 && b <= 200)
        {
            printf("Before Swapping A=%d, C=%d:\n", a, c);
            temp = a;
            a = c;
            c = temp;
            printf("After Swapping A=%d, C=%d:\n", a, c);
        }
        else if (b < 100 && b >= 0)
        {
            printf("Multipilcation: A*C = %d\n", a * c);
        }
        else
        {
            printf("Value of B is not in range of 0 to 200, please re enter the value of B\n");
        }
    } while (b < 0 || b > 200);

    return 0;
}