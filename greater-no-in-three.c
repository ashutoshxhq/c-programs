// Write a program to compare 3 variables a, b and c and find the greater number among a,b,c

// Write a program to generate a pyramid using astric symbol if a is greator then b and a is greator than c
// if b is greator then  find the factorial of a and c
#include<stdio.h>

long long int factorial(long long int n){
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

int main(){
    int a,b,c, k =0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Greater No:%d\n",a);
        for (int i = 1; i <= 6; i++, k = 0) {
            for (int space = 1; space <= 6 - i; space++) {
                printf("  ");
            }
            while (k != 2*i - 1) {
                printf("* ");
                ++k;
            }
            printf("\n");
        }
    } else if(b>a && b>c){
        printf("Greater No:%d\n",b);
        printf("Factorial of A:%d\n",factorial(a));
        printf("Factorial of B:%d\n",factorial(b));
    } else if(c>a && c>b) {
        printf("Greater No:%d",c);
    } else{
        printf("Two or more numbers are equal");
    }
    return 0;
}