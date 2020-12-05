#include<stdio.h>

int main(){
    register int arr[100];
    // This will give an error because we are trying to get the address while accessing a[i]
    // for (int i=0; i<4;i++){
    //     arr[i] = 10+i;
    // }

    //this will work because compiler will know before hand the memory we are trying to access since its using a constant and assign it
    printf("%d\n%d\n%d\n%d",arr[0],arr[1],arr[2],arr[3]);
    return 0;
}