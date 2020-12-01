#include<stdio.h>

int main(){
    int arr[3][3],temp;
    printf("Enter 4 values for 2*2 matrix:\n");
    for(int i = 0; i<2;i++){
        for (int j=0; j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix Before Operation:\n");
    for(int i = 0; i<2;i++){
        for (int j=0; j<2;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    if((arr[0][0]%2 == 0 && arr[1][1]%2 != 0) || (arr[0][0]%2 != 0 && arr[1][1]%2 == 0 )){
        temp = arr[0][0];
        arr[0][0] = arr[1][1];
        arr[1][1] = temp;
    }
    if((arr[0][1]%2 == 0 && arr[1][0]%2 != 0) || (arr[0][1]%2 != 0 && arr[1][0]%2 == 0 )){
        temp = arr[0][1];
        arr[0][1] = arr[1][0];
        arr[1][0] = temp;
    }
    printf("Matrix After Operation:\n");
    for(int i = 0; i<2;i++){
        for (int j=0; j<2;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}