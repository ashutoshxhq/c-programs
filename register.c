#include<stdio.h>

int main(){
    register int arr[100];
    for (int i=0; i<4;i++){
        arr[i] = 10+i;
    }
    printf("%d\n%d\n%d\n%d",arr[0],arr[1],arr[2],arr[3]);
    return 0;
}