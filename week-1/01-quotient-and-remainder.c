#include<stdio.h>

int main(){
    int a,b;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    printf("Quotient = %d\nRemainder = %d",a/b,a%b);
    return 0;
}