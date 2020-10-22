// write a program to check if the given number provided by the user is even or odd,
// if the number is even add any odd value to it else generate the multiplication table of the odd value

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {   
        a += 3;
        printf("%d", a + 3);
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", a, i, a * i);
        }
    }
    return 0;
}
