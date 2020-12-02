// WAP to solve this logical problem, if an even no is followed by another
// even no then we will sub the value of 1st even no from the second
// even number, if the odd number followes the even number then
// add the even and odd values
// if the odd follows the odd you will multiply the value
// if even no follows the odd number then divide the values

#include <stdio.h>

void usingMatrix()
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
        if(i==0){
            temp = lastNumber;
        }
    }

    printf("The Answer is: %d", lastNumber * temp);
}

void usingArray()
{
    int temp, lastNumber, row1[10] = {12, 13, 22, 41}, row2[10] = {11, 22, 2, 4};
    lastNumber = row1[0];
    for (int i = 1; i < 4; i++)
    {
        if (lastNumber % 2 == 0 && row1[i] % 2 == 0)
        {
            lastNumber = lastNumber - row1[i];
        }
        else if (lastNumber % 2 == 0 && row1[i] % 2 != 0)
        {
            lastNumber = lastNumber + row1[i];
        }
        else if (lastNumber % 2 != 0 && row1[i] % 2 != 0)
        {
            lastNumber = lastNumber * row1[i];
        }
        else if (lastNumber % 2 != 0 && row1[i] % 2 == 0)
        {
            lastNumber = lastNumber / row1[i];
        }
    }

    temp = lastNumber;

    lastNumber = row2[0];

    for (int i = 1; i < 4; i++)
    {
        if (lastNumber % 2 == 0 && row2[i] % 2 == 0)
        {
            lastNumber = lastNumber - row2[i];
        }
        else if (lastNumber % 2 == 0 && row2[i] % 2 != 0)
        {
            lastNumber = lastNumber + row2[i];
        }
        else if (lastNumber % 2 != 0 && row2[i] % 2 != 0)
        {
            lastNumber = lastNumber * row2[i];
        }
        else if (lastNumber % 2 != 0 && row2[i] % 2 == 0)
        {
            lastNumber = lastNumber / row2[i];
        }
    }

    printf("The Answer is: %d", lastNumber * temp);
}

int main()
{
    usingArray();
    usingMatrix();
    return 0;
}