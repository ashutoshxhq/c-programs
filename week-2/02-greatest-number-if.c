#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Greater No:%d\n",a);
    } else if(b>a && b>c){
        printf("Greater No:%d\n",b);
    } else if(c>a && c>b) {
        printf("Greater No:%d",c);
    } else{
        printf("Two or more numbers might be equal");
    }
    return 0;
}