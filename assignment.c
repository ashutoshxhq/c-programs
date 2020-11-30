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
        else if (s.choices[1] == topics[i])
        {
            return topics[i];
        }
        else if (s.choices[2] == topics[i])
        {
            return topics[i];
        }
        else if (s.choices[3] == topics[i])
        {
            return topics[i];
        }
        else if (s.choices[4] == topics[i])
        {
            return topics[i];
        }
    }
    return topics[(rand() % (n + 1))];
}

int main()
{
    int freeTopics[40] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}, freeTopicCount = 32, removingTopics = 0, random;
    struct Student students[100] = {{0, -1, {1, 2, 3, 4, 5}}, {1, -1, {1, 2, 3, 4, 5}}, {2, -1, {1, 2, 3, 4, 5}}, {3, -1, {1, 2, 3, 4, 5}}, {4, -1, {1, 2, 3, 4, 5}}, {5, -1, {1, 2, 3, 4, 5}}, {6, -1, {1, 2, 3, 4, 5}}, {7, -1, {1, 2, 3, 4, 5}}, {8, -1, {1, 2, 3, 4, 5}}, {9, -1, {1, 2, 3, 4, 5}}, {10, -1, {1, 2, 3, 4, 5}}, {11, -1, {1, 2, 3, 4, 5}}, {12, -1, {1, 2, 3, 4, 5}}, {13, -1, {1, 2, 3, 4, 5}}, {14, -1, {1, 2, 3, 4, 5}}, {15, -1, {1, 2, 3, 4, 5}}, {16, -1, {1, 2, 3, 4, 5}}, {17, -1, {1, 2, 3, 4, 5}}, {18, -1, {1, 2, 3, 4, 5}}, {19, -1, {1, 2, 3, 4, 5}}, {20, -1, {1, 2, 3, 4, 5}}, {21, -1, {1, 2, 3, 4, 5}}, {22, -1, {1, 2, 3, 4, 5}}, {23, -1, {1, 2, 3, 4, 5}}, {24, -1, {1, 2, 3, 4, 5}}, {25, -1, {1, 2, 3, 4, 5}}, {26, -1, {1, 2, 3, 4, 5}}, {27, -1, {1, 2, 3, 4, 5}}, {28, -1, {1, 2, 3, 4, 5}}, {29, -1, {1, 2, 3, 4, 5}}, {30, -1, {1, 2, 3, 4, 5}}, {31, -1, {1, 2, 3, 4, 5}}};
    
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