#include<stdio.h>

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

int reverse(int n){
    int new = 0;
    while(n/10 != 0){
        new = new*10+n%10;
        n /= 10;
    }
    new  = new*10+n;
    return new;
}

int checkleapYear(int year){
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)){
        return 1;
    }
    return 0;
}

int main(){
    int y;
    printf("Enter a year:\n");
    scanf("%d",&y);
    checkPalindrome(y);
    printf("Reverse: %d\n",reverse(y));
    if(checkleapYear(y) == 1){
        printf("It's a leap year\n");
    } else{
        printf("It's not a leap year\n");
    }
    return 0;
}