#include<stdio.h>

struct Map
{
    int number;
    int count;
};


int main(){
    int x[100], n,mean = 0, count = 0;
    struct Map nums[100];
    printf("Enter the length of array:\n",&n);
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
        mean += x[i];
    }
    for (int i = 0; i < n; i++)
    {
        nums[i].number = x[i];
        for (int j = i+1; j < n; j++)
        {
            if (x[i] == x[j])
            {
                count++;
            }
            
        }
        count = 0;
        nums[i].count = count;
    }
    
    
    return 0;
}