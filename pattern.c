#include<stdio.h>

int main(){
    int n, arr[100][100], term1 = 0, term2 = 1, nextTerm;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        arr[0][i] = term1;
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    for(int i=n-1;i>0;i--){
        arr[1][(n-i)-1]  = arr[0][i];
    }

    for(int i=0;i<n;i++){
        arr[2][i]  = arr[1][i] - arr[0][i];
    }
    for(int i=0;i<3;i++){
        for (int j = 0; j<n; j++)
        {
            if(arr[i][j] >0){
                printf("%d ",arr[i][j]);
            } else{
                printf("%d ",-1 * arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}