#include<stdio.h>

int main(){
    int n,x[100][100];
    printf("Enter the height of rhombus:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i<=n/2)
            {
               if (n/2+i == i+j)
                {
                    x[i][j] = 1;
                }
                else if (j < (n/2)+i && j > (n/2)-i)
                {
                    x[i][j] = 0;
                }
                else{
                    x[i][j] = -1;
                }
            } else{
                if (n/2+i == i+j)
                {
                    x[i][j] = 1;
                }
                else if (j < (n/2)+i && j > (n/2)-i)
                {
                    x[i][j] = 0;
                }
                else{
                    x[i][j] = -1;
                }
            }
            
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c ",x[i][j]==1?'#':x[i][j]==0?'*':' ');
        }
        printf("\n");
        
    }
    
    
    return 0;
}