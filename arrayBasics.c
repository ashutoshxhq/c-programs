// print all values in array

#include<stdio.h>

int main(){
    int arr[10], n, a;
    //input value of n from user *
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    // loop from 0 to n and put data in array *
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");

    // dispay all the elements in array
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    // display even location values
    printf("Even Location Values:\n");
    for(int i=0;i<n;i = i+2){
        printf("%d ",arr[i]);
    }
    printf("\n");

    // display odd location values
    printf("Odd Location Values:\n");
    for(int i=1;i<n;i = i+2){
        printf("%d ",arr[i]);
    }
    printf("\n");


    // display even values
    printf("Even Values:\n");
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    return 0;
}