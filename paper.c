#include<stdio.h>

int main(){
    int n=8,d1 = 1189,d2 = 841;
    printf("For A0, area=%d\n",d1*d2);
    for (int i =1; i<=n;i++)
    {
        if(d1>d2){
            printf("For A%d, area=%d\n",i,(d1/2)*d2);
            d1 = d1/2;
        } else{
            printf("For A%d, area=%d\n",i,(d2/2)*d1);
            d2 = d2/2;
        }
    }

    return 0;
}