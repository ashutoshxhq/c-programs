#include<stdio.h>

void bubbleSortAndPrint(int arr[], int n) 
{
   int i, j, temp; 
   for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++) {
           if (arr[j] > arr[j+1]) {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }
   printf("\n Even Location Values sorted in reverse order are:");
   for (int i = n-1; i> 0; i--)
   {
       printf("%d ",arr[i]);
   }
   printf("\n");
} 

int main() {
    int n,x[100],y[100],j=0;
    printf("Enter the range of array:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            y[j] = x[i];
            j++;
        }
    }
    bubbleSortAndPrint(y,(n/2)+1);
    return 0;
}