#include <stdio.h>

int main(){

    int count=1, n=8;
    int arr[10]={10,10,1,1,5,6,7,8};

    for(int i=0;i<n;i++, count=0){
        count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>0){
            printf("%d is present %d times\n", arr[i],count);
        }
    }
    return 0;
}