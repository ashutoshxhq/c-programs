#include <stdio.h>

void checkPrime(int n){
    int check = 0;
    for (int i=2; i<=n/2;i++){
        if(n%i == 0){
            check = 1;
            break;
        }
    }
    if (check == 1){
        printf("Number is not Prime\n");
    } else{
        printf("Number is Prime\n");
    }
}

void checkPalindrome(int n){
    int nCopy = n,new = 0;
    while(n/10 != 0){
        new = new*10+n%10;
        n /= 10;
    }
    new  = new*10+n;
    if(new == nCopy){
        printf("Number is Palindrome\n");
    } else{
        printf("Number is not Palindrome\n");
    }
}

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n%2 == 0){
        printf("Number is even\n");
        checkPrime(n);
        checkPalindrome(n);
    } else{
        printf("Number is Odd\n");
        checkPrime(n);
        checkPalindrome(n);
    }
}
