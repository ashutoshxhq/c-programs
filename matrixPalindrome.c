#include<stdio.h>

int reverse(int n){
    int new = 0;
    while(n != 0){
        new = new*10+n%10;
        n /= 10;
    }
    return new;
}


int main(){
    int x[3][3],check=0,d1 = 0,d2 = 0,c1 = 0,c2 = 0;
    printf("Enter values for 3*3 matrix:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");    
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i+j == 2){
                d1 = d1*10+x[i][j];
            }
            if (i-j == 0)
            {
                d2 = d2*10+x[i][j];
            }
            
            if (j == 1)
            {
                c1 = c1*10+x[i][j];
                
            }
            if (i == 1)
            {
                c2 = c2*10+x[i][j];   
            }
        }
    }
    
    
    if (d1 == reverse(d1))
    {
        printf("Diameter 1 is palindrome\n");
    } else{
        printf("Diameter 1 is not palindrome\n");
    }

    if (d2 == reverse(d2))
    {
        printf("Diameter 2 is palindrome\n");
    } else{
        printf("Diameter 2 is not palindrome\n");
    }

    if (d2 == reverse(d2))
    {
        printf("Diameter 2 is palindrome\n");
    } else{
        printf("Diameter 2 is not palindrome\n");
    }

    if (c1 == reverse(c1))
    {
        printf("Crossection 1 is palindrome\n");
    } else{
        printf("Crossection 1 is not palindrome\n");
    }

    if (c2 == reverse(c2))
    {
        printf("Crossection 2 is palindrome\n");
    } else{
        printf("Crossection 2 is not palindrome\n");
    }
    
    return 0;
}


// Find a numbe rin a list whose frequencey is near to the average value of the given number sin the list 