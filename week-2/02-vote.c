#include <stdio.h>

int main()
{
    int a;
    printf("Enter your age:");
    scanf("%d", &a);
    if(a>18){
        printf("You are eligible to vote");
    }
    return 0;
}
