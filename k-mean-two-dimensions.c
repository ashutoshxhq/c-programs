#include <stdio.h>
#include <math.h>

struct Cordinates
{
    int x;
    int y;
};

struct CentroidValues
{
    struct Cordinates data[10];
};

struct Centroid
{
    struct Cordinates data;
    int noOfValues;
    struct Cordinates values[10];
};

float calculateDistance(int x1, int x2, int y1, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
    int k = 0, tempx = 0, tempy = 0;
    struct Cordinates lastCentroid[2], data[20] = {{3, 40000}, {3, 35000}, {12, 40000}, {1, 20000}, {4, 35000}, {7, 65000}, {8, 64000}, {5, 55000}, {12, 80000}};
    struct Centroid centroid[2] = {{{4, 40000}, 0}, {{22, 0}, 0}};

    printf("The Cordinates are:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("For %d: %d,%d\n", i, data[i].x, data[i].y);
    }

    do
    {
        k++;
        printf("\n\n##For Iteration %d with centroids (%d,%d) (%d,%d) ",k, centroid[0].data.x, centroid[0].data.y, centroid[1].data.x, centroid[1].data.y);
        centroid[0].noOfValues = 0;
        for (int i = 0; i < centroid[0].noOfValues; i++)
        {
            centroid[0].values[i].x = 0;
            centroid[0].values[i].y = 0;
        }
        centroid[1].noOfValues = 0;
        for (int i = 0; i < centroid[1].noOfValues; i++)
        {
            centroid[1].values[i].x = 0;
            centroid[1].values[i].y = 0;
        }

        for (int j = 0; j < 9; j++)
        {
            if (calculateDistance(centroid[0].data.x, data[j].x, centroid[0].data.y, data[j].y) < calculateDistance(centroid[1].data.x, data[j].x, centroid[1].data.y, data[j].y))
            {
                centroid[0].values[centroid[0].noOfValues].x = data[j].x;
                centroid[0].values[centroid[0].noOfValues].y = data[j].y;
                centroid[0].noOfValues++;
            }
            else
            {
                centroid[1].values[centroid[1].noOfValues].x = data[j].x;
                centroid[1].values[centroid[1].noOfValues].y = data[j].y;
                centroid[1].noOfValues++;
            }
        }
        tempx = 0;
        tempy = 0;

        lastCentroid[0].x = centroid[0].data.x;
        lastCentroid[0].y = centroid[0].data.y;

        lastCentroid[1].x = centroid[1].data.x;
        lastCentroid[1].y = centroid[1].data.y;

        for (int i = 0; i < centroid[0].noOfValues; i++)
        {
            tempx += centroid[0].values[i].x;
            tempy += centroid[0].values[i].y;
        }
        centroid[0].data.x = tempx / centroid[0].noOfValues;
        centroid[0].data.y = tempy / centroid[0].noOfValues;
        tempx = 0;
        tempy = 0;
        for (int i = 0; i < centroid[1].noOfValues; i++)
        {
            tempx += centroid[1].values[i].x;
            tempy += centroid[1].values[i].y;
        }
        centroid[1].data.x = tempx / centroid[1].noOfValues;
        centroid[1].data.y = tempy / centroid[1].noOfValues;

        printf("\n    New Mean Centroid Cordinates Are: (%d,%d) (%d,%d) ", centroid[0].data.x, centroid[0].data.y, centroid[1].data.x, centroid[1].data.y);
    } while (lastCentroid[0].x != centroid[0].data.x || lastCentroid[0].y != centroid[0].data.y || lastCentroid[1].x != centroid[1].data.x || lastCentroid[1].y != centroid[1].data.y);

    printf("\n\nLast two mean cordinates are same so, Final Mean Cordinates Are: (%d,%d) (%d,%d) ", centroid[0].data.x, centroid[0].data.y, centroid[1].data.x, centroid[1].data.y);
    printf("\nFinal Values of Centroid (%d,%d):\n", centroid[0].data.x, centroid[0].data.y);
    for (int i = 0; i < centroid[0].noOfValues; i++)
    {
        printf("For %d: %d,%d\n", i, centroid[0].values[i].x, centroid[0].values[i].y);
    }
    printf("Final Values of Centroid (%d,%d):\n", centroid[1].data.x, centroid[1].data.y);
    for (int i = 0; i < centroid[1].noOfValues; i++)
    {
        printf("For %d: %d,%d\n", i, centroid[1].values[i].x, centroid[1].values[i].y);
    }
    return 0;
}