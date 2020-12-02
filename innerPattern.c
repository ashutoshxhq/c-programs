#include <stdio.h>

int main(){
    int n=4, arr[100][100];
    int size = 2*n-1;
    int front = 0;
    int back = size -1;
    while(n !=0){
        for (int i = front; i <= back; i++) {
            for (int j = front; j <= back; j++) {
                if (i == front || i == back || j == front || j == back){
                    arr[i][j] = n;
                }
            }
        }
        back--;
        front++;
        n--;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
