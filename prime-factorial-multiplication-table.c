// WAF to check wether the given number is prime or not. If prime find factorial of the given number else
// generate the multiplication table of the number

#include<stdio.h>

long factorial(long n){
    long f = 1;
    for (int i = n; i>0; i--){
        f = f*i;
    }
    return f;
}

int checkPrime(int n){

    for (int i=2; i<n;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

void multiplicationTable(int n){
    printf("\nTable for %d:\n\n", n);

    for (int j = 1; j <= 10; j++)
    {
        printf("%d * %d = %d\n", n, j, n * j);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    // n = 7
    if(checkPrime(n) == 1){
       printf("Factorial: %ld\n",factorial(n));
    } else{
        multiplicationTable(n);
    }

    return 0;
}