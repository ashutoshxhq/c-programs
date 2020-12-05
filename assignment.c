#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    int assignment;
    int choices[5];
};

int assignTopic(struct Student s, int topics[40], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s.choices[0] == topics[i])
        {
            return topics[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s.choices[1] == topics[i])
        {
            return topics[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s.choices[2] == topics[i])
        {
            return topics[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s.choices[3] == topics[i])
        {
            return topics[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s.choices[4] == topics[i])
        {
            return topics[i];
        }
    }
    return topics[(rand() % (n + 1))];
}

int main()
{
    int freeTopics[40] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32}, freeTopicCount = 32, removingTopics = 0, random;
    struct Student students[100] = {{0, -1, {7}}, {1, -1, {5,8,6,11,15}}, {2, -1, {18,9,8,7,30}}, {3, -1, {26,27,7,29,2}}, {4, -1, {7,26,8,9,4}}, {5, -1, {1}}, {6, -1, {7,29,23}}, {7, -1, {26,7,25,18,22}}, {8, -1, {24,23,20}}, {9, -1, {27,24,23,25}}, {10, -1, {28,11}}, {11, -1, {1,30}}, {12, -1, {7,8,12,30}}, {13, -1, {7,16,17,26}}, {14, -1, {1}}, {15, -1, {7,26,11,1,12}}, {16, -1, {24,26, 20,14, 6}}, {17, -1, {8,7,4,26,18}}, {18, -1, {7,8,9,25,30}}, {19, -1, {9,1}}, {20, -1, {7,8,9,31}}, {21, -1, {6,7,8,9}}, {22, -1, {7,18,22,1,25}}, {23, -1, {1, 2, 3, 4, 5}}, {24, -1, {1, 2, 3, 4, 5}}, {25, -1, {1, 2, 3, 4, 5}}, {26, -1, {1, 2, 3, 4, 5}}, {27, -1, {1, 2, 3, 4, 5}}, {28, -1, {1, 2, 3, 4, 5}}, {29, -1, {1, 2, 3, 4, 5}}, {30, -1, {1, 2, 3, 4, 5}}, {31, -1, {1, 2, 3, 4, 5}}};
    
    for (int i = 0; i < 32; i++)
    {
        students[i].assignment = assignTopic(students[i], freeTopics, freeTopicCount);
        printf("For student with id: %d, Assignment No is: %d\n", students[i].id, students[i].assignment);
        for (int j = 0; j < freeTopicCount; j++)
        {   
            if (students[i].assignment == freeTopics[j])
            {
                removingTopics = 1;
                freeTopicCount--;
            }
            if (removingTopics == 1)
            {
                freeTopics[j] = freeTopics[j + 1];
            }
        }
        removingTopics = 0;
    }
    return 0;
}