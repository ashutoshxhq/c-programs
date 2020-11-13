#include<stdio.h>

int main(){
    int n,check=0;
    scanf("%d",&n);
    for (int i= 2; i<=n/2;i++){
        if(n%i == 0){
            check = 1;
            break;
        }
    }
    if(check == 1){
        printf("Not Prime");
    } else{
        printf("Prime");
    }
    return 0;
}