#include<stdio.h>

int main(){
    int a,b,c,d,temp;
    printf("Enter 4 values for a,b,c,d:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("Values Before Swapping:\n");
    printf("\n%d %d\n%d %d",a,b,c,d);
    if((a%2 == 0 && d%2 != 0) || (a%2 != 0 && d%2 == 0 )){
        temp = a;
        a = d;
        d = temp;
    }
    if((b%2 == 0 && c%2 != 0) || (b%2 != 0 && c%2 == 0 )){
        temp = b;
        b = c;
        c = temp;
    }
    printf("\nValues After Swapping:\n");
    printf("\n%d %d\n%d %d",a,b,c,d);
    return 0;
}