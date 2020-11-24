#include <stdio.h>
#include <math.h>

struct Cordinates
{
    int x;
    int y;
    int z;
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

float calculateDistance(int x1, int x2, int y1, int y2, int z1, int z2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (z2 - z1));
}

int main()
{
    int k = 0, tempx = 0, tempy = 0,tempz = 0;
    struct Cordinates lastCentroid[2], data[20] = {{54, 40, 24}, {30, 35,65}, {51, 70,65}, {55, 35,44}, {40, 35, 65}};
    struct Centroid centroid[2] = {{{40, 40, 40}, 0}, {{20, 20, 20}, 0}};

    printf("The Cordinates are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("For %d: %d,%d,%d\n", i, data[i].x, data[i].y,data[i].z);
    }

    do
    {
        k++;
        printf("\n\n##For Iteration %d with centroids (%d,%d,%d) (%d,%d,%d) ",k, centroid[0].data.x, centroid[0].data.y,centroid[0].data.z, centroid[1].data.x, centroid[1].data.y, centroid[1].data.z);
        centroid[0].noOfValues = 0;
        for (int i = 0; i < centroid[0].noOfValues; i++)
        {
            centroid[0].values[i].x = 0;
            centroid[0].values[i].y = 0;
            centroid[0].values[i].z = 0;
        }
        centroid[1].noOfValues = 0;
        for (int i = 0; i < centroid[1].noOfValues; i++)
        {
            centroid[1].values[i].x = 0;
            centroid[1].values[i].y = 0;
            centroid[1].values[i].z = 0;
        }

        for (int j = 0; j < 5; j++)
        {
            if (calculateDistance(centroid[0].data.x, data[j].x, centroid[0].data.y, data[j].y, centroid[0].data.z, data[j].z) < calculateDistance(centroid[1].data.x, data[j].x, centroid[1].data.y, data[j].y, centroid[1].data.z, data[j].z))
            {
                centroid[0].values[centroid[0].noOfValues].x = data[j].x;
                centroid[0].values[centroid[0].noOfValues].y = data[j].y;
                centroid[0].values[centroid[0].noOfValues].z = data[j].z;
                centroid[0].noOfValues++;
            }
            else
            {
                centroid[1].values[centroid[1].noOfValues].x = data[j].x;
                centroid[1].values[centroid[1].noOfValues].y = data[j].y;
                centroid[1].values[centroid[1].noOfValues].z = data[j].z;
                centroid[1].noOfValues++;
            }
        }
        tempx = 0;
        tempy = 0;
        tempz = 0;

        lastCentroid[0].x = centroid[0].data.x;
        lastCentroid[0].y = centroid[0].data.y;
        lastCentroid[0].z = centroid[0].data.z;

        lastCentroid[1].x = centroid[1].data.x;
        lastCentroid[1].y = centroid[1].data.y;
        lastCentroid[1].z = centroid[1].data.z;

        for (int i = 0; i < centroid[0].noOfValues; i++)
        {
            tempx += centroid[0].values[i].x;
            tempy += centroid[0].values[i].y;
            tempz += centroid[0].values[i].y;
        }
        centroid[0].data.x = tempx / centroid[0].noOfValues;
        centroid[0].data.y = tempy / centroid[0].noOfValues;
        centroid[0].data.z = tempz / centroid[0].noOfValues;
        tempx = 0;
        tempy = 0;
        tempz = 0;
        for (int i = 0; i < centroid[1].noOfValues; i++)
        {
            tempx += centroid[1].values[i].x;
            tempy += centroid[1].values[i].y;
            tempz += centroid[1].values[i].z;
        }
        centroid[1].data.x = tempx / centroid[1].noOfValues;
        centroid[1].data.y = tempy / centroid[1].noOfValues;
        centroid[1].data.z = tempz / centroid[1].noOfValues;

        printf("\n    New Mean Centroid Cordinates Are: (%d,%d,%d) (%d,%d,%d) ", centroid[0].data.x, centroid[0].data.y,centroid[0].data.z, centroid[1].data.x, centroid[1].data.y,centroid[1].data.z);
    } while (lastCentroid[0].x != centroid[0].data.x || lastCentroid[0].y != centroid[0].data.y || lastCentroid[0].z != centroid[0].data.z || lastCentroid[1].x != centroid[1].data.x || lastCentroid[1].y != centroid[1].data.y || lastCentroid[1].z != centroid[1].data.z);

    printf("\n\nLast two mean cordinates are same so, Final Mean Cordinates Are: (%d,%d,%d) (%d,%d,%d) ", centroid[0].data.x, centroid[0].data.y,centroid[0].data.z, centroid[1].data.x, centroid[1].data.y,centroid[1].data.z);
    printf("\nFinal Values of Centroid (%d,%d,%d):\n", centroid[0].data.x, centroid[0].data.y,centroid[0].data.z);
    for (int i = 0; i < centroid[0].noOfValues; i++)
    {
        printf("For %d: %d,%d,%d\n", i, centroid[0].values[i].x, centroid[0].values[i].y,centroid[0].values[i].z);
    }
    printf("Final Values of Centroid (%d,%d,%d):\n", centroid[1].data.x, centroid[1].data.y, centroid[1].data.z);
    for (int i = 0; i < centroid[1].noOfValues; i++)
    {
        printf("For %d: %d,%d,%d\n", i, centroid[1].values[i].x, centroid[1].values[i].y,centroid[1].values[i].z);
    }
    return 0;
}