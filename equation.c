#include<stdio.h>

int main(){
    int u, t, a,v;
    printf("Initial Velosity:%d\n");
    scanf("%d",&u);
    printf("Time:%d\n");
    scanf("%d",&t);
    printf("Aceleration:%d\n");
    scanf("%d",&a);
    
    printf("s= ut + i/2(at^2)=%d",(u*t)+(1/2)*(a*t*t));
    printf("v= ut + i/2(at^2)=%d",(u*t)+(1/2)*(a*t*t));

    return 0;
}