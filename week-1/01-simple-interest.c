#include<stdio.h>

int main(){
    int p,r,t;
    printf("Enter Principle, Rate, Time:");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple Intrest = %d",(p*r*t)/100);
    return 0;
}