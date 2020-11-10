// WAP to solve this logical problem, if an even no is followed by another
// even no then we will sub the value of 1st even no from the second
// even number, if the odd number followes the even number then
// add the even and odd values
// if the odd follows the odd you will multiply the value
// if even no follows the odd number then divide the values

#include <stdio.h>

int main()
{
    int temp, lastNumber, data[2][4] = {{12, 13, 22, 41}, {11, 22, 2, 4}};
    for (int i = 0; i < 2; i++)
    {
        lastNumber = data[i][0];

        for (int j = 1; j < 4; j++)
        {
            if (lastNumber % 2 == 0 && data[i][j] % 2 == 0)
            {
                lastNumber = lastNumber - data[i][j];
            }
            else if (lastNumber % 2 == 0 && data[i][j] % 2 != 0)
            {
                lastNumber = lastNumber + data[i][j];
            }
            else if (lastNumber % 2 != 0 && data[i][j] % 2 != 0)
            {
                lastNumber = lastNumber * data[i][j];
            }
            else if (lastNumber % 2 != 0 && data[i][j] % 2 == 0)
            {
                lastNumber = lastNumber / data[i][j];
            }
        }
        temp = lastNumber;
    }

        printf("The Answer is: %d", lastNumber * temp);
    return 0;
}