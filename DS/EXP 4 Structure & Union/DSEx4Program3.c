// WAP to input roll & mark of 2 students & display the roll of topper
#include <stdio.h>
int main(){
    struct student
    {
        double roll;
        float mark;
    };
    struct student s1,s2;
    printf("Enter roll of first student: ");
    scanf("%d",&s1.roll);
    printf("Enter marks of first student: ");
    scanf("%f",&s1.mark);
    printf("Enter roll of second student: ");
    scanf("%d",&s2.roll);
    printf("Enter marks of second student: ");
    scanf("%f",&s2.mark);
    printf("\n");

    printf("Student 1: roll= %d & marks= %f\nStudent 2: roll= %d & marks= %f",s1.roll,s1.mark,s2.roll,s2.mark);
    printf("\n\n");

    if (s1.mark>s2.mark)
    {
        printf("Topper: %d",s1.roll);  
    } else if (s2.mark>s1.mark){
        printf("Topper: %d",s2.roll);
    } else {
        printf("Both students marks are same, Topper can't be choosed!");
    }
    
}