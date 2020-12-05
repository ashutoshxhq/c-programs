#include<stdio.h>

void printRange(int range){
    for (int i = 0; i <= range; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}

void printReverseRangeTill(int initialValue, int till){
for(int i=initialValue; i>=till; i--){
        printf("%d ",i);
    }
    printf("\n");
}

int main() {
    int n,m;
    printf("Provide Initial Value::\n");
    scanf("%d",&m);
    printf("Provide value between 2 to 20:\n");
    scanf("%d",&n);
    printRange(m);
    printReverseRangeTill(m,n);
    return 0;
}