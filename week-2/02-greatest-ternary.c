#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a>b && a>c)?printf("Greater No:%d\n",a):(b>a && b>c)?printf("Greater No:%d\n",b):(c>a && c>b)?printf("Greater No:%d\n",c):printf("Two or more numbers might be equal");
    return 0;
}