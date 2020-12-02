#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%.*s",n-i,"                                          ");
        printf("%.*s\n",2*i - 1,"******************************************");
    }

    return 0;
}