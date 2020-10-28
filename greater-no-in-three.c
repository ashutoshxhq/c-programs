// Write a program to compare 3 variables a, b and c and find the greater number among a,b,c

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Greater No:%d",a);
    } else if(b>a && b>c){
        printf("Greater No:%d",b);
    } else if(c>a && c>b) {
        printf("Greater No:%d",c);
    } else{
        printf("Nos are equal");
    }
    return 0;
}