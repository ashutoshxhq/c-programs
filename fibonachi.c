#include<stdio.h>

int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 

int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Fibonacci Series Sum: %d\n",fib(n));
    return 0;
}