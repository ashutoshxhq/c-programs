#include<stdio.h>

int reverse(int n){
    int new = 0;
    while(n != 0){
        new = new*10+n%10;
        n /= 10;
    }
    return new;
}


int countNumbers(int n){
    int i=0;
    while(n != 0){
        i++;
        n /= 10;
    }
    return i;
}

int reversePattern(int n){
    int new = 0,n_copy =n,n_reverse = reverse(n), checkOdd =0, count = countNumbers(n), k =0;
    while(n != 0){
        if((n%10)%2 == 0){
            k++;
            new = new*10+n%10;
            n /= 10;
        } else{
            checkOdd = 1;
            break;
        }
    }
    if(checkOdd == 1){
        for(int i=0; i<count-(k+1);i++){
            new = new*10+n_reverse%10;
            n_reverse /=10;
        }
    }
    return new;
}


int main(){
    int n;
    scanf("%d",&n);
    printf("Pattern :%d\n",reversePattern(n));
    return 0;
}