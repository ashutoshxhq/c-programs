#include<stdio.h>

int main(){
    int n;
   
    for (int i =0; i<5; i++){
        printf("Enter a number:");
        scanf("%d",&n);
        if(n%2 == 0 && n>2 && n<50){
            printf("Number falls in our range\n");
            break;
        } else{
            printf("Try again, %d attempts left\n",4-i);
        }
    }
    return 0;
}