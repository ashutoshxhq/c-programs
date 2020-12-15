#include<stdio.h>

struct Map
{
    int key;
    int value;
};

int main(){
    int n, arr[100],k=0;
    struct Map m[100];
    printf("Provice the size of array:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int check = 0;
        for (int j = 0; j <= k; j++)
        {
            if(m[j].key == arr[i]) {
                m[j].value++;
                check = 1;
            }
        }

        if (check == 0)
        {
            struct Map temp;
            temp.key = arr[i];
            temp.value = 1;
            m[k] = temp;
            k++;
        } 
    }

    for (int i = 0; i < k; i++)
    {
        if(m[i].value > 1){
            printf("\n%d is repeated %d times\n",m[i].key,m[i].value);
        }
    }
    
    return 0;
}