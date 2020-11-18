// WAP to grade the students in 5 different papers as per the given condition.
// If the student scores more than 60% he is pass other wise he fails the exams

#include<stdio.h>

struct Student
{
   int physics;
   int maths;
   int computer_science;
   int english;
   int chemistry;
   int grade;
};


int main(){
    int i= 0;
    do{
        struct Student std;
        std.grade = 0;
        printf("Enter marks for 5 subject:\n");
        scanf("%d%d%d%d%d",&std.physics,&std.chemistry,&std.maths,&std.english,&std.computer_science);
        if(std.physics > 60){
            printf("Student passed in physics\n");
            std.grade++; 
        } else{
            printf("Student failed in physics\n");
        }
        if(std.chemistry > 60){
            printf("Student passed in chemistry\n");
            std.grade++; 
        }else{
            printf("Student failed in chemistry\n");
        }
        if(std.maths > 60){
            printf("Student passed in maths\n");
            std.grade++; 
        }else{
            printf("Student failed in maths\n");
        }
        if(std.english > 60){
            printf("Student passed in english\n");
            std.grade++; 
        }else{
            printf("Student failed in english\n");
        }
        if(std.computer_science > 60){
            printf("Student passed in computer_science\n");
            std.grade++; 
        }else{
            printf("Student failed in computer_science\n");
        }
        printf("Student's grade point is %d\n",std.grade);
    }while(i<10);
}