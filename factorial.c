#include<stdio.h>

long factorialRecursive(long n){
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

long factorial(long n){
    int f = 1;
    for (int i = n; i>0; i--){
        f = f*i;
    }
    printf("Factorial is %d",f);
}

int main() {
    int a;
    scanf("%d",&a);
    printf("Factorial of No is:%d",factorial(a));
    return 0;
}