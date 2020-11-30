// Wap using switch case to provide grade to the students depending upon the marks scored.

#include<stdio.h>

char calculateGrade(int a, int b, int c){
    if((a+b+c)/3 >90){
        return 'a';
    } else if((a+b+c)/3 >70){
        return 'b';
    } else{
        return 'c';
    }
}

int main(){
    int sub1, sub2, sub3;
    char grade;
    printf("Enter marks of three subjects:");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
 
    switch(calculateGrade(sub1,sub2,sub3)){
        case 'a':
            printf("You scored more than 90 and your grade is A");
            break;
        case 'b':
            printf("You scored more than 70 and your grade is B");
            break;
        case 'c':
            printf("You scored below 70 and your grade is C");
            break;
        default:
            printf("Grade out of range");
    }
    return 0;
}