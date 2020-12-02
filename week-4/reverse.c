#include <stdio.h>

int main()
{
    int i, j, n, new = 0;
    scanf("%d", &n);

    printf("Initial Number: %d\n\n", n);

    while(n/10 != 0){
        new = new*10+n%10;
        n /= 10;
    }
    new  = new*10+n;
    printf("New Number is: %d",new);

    return 0;
}