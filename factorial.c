#include<stdio.h>

long factorial(long n){
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

int main() {
    int a;
    scanf("%d",&a);
    printf("Factorial of No is:%d",factorial(a));
    return 0;
}