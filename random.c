#include<stdio.h>
#include <stdlib.h> 

int main(){
    int n,random;
    while(random%2 == 0){
        random = rand();
    }
    printf("Random number is:%d [Printing just to check]\n",random);
    for (int i =0; i<5; i++){
        printf("Enter a number:");
        scanf("%d",&n);
        if(n==random){
            printf("You got the number right, You won:%d",(5-i)*100);
            break;
        } else{
            printf("Try again, %d attempts left\n",4-i);
        }
    }
    return 0;
}