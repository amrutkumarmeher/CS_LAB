//WAP to input roll & marks of two students & display them
#include <stdio.h>
int main(){
    struct student
    {
        double rollno;
        float marks;
    };
    struct student s1;
    struct student s2;
    printf("Enter roll number of first student: ");
    scanf("%d",&s1.rollno);
    printf("Enter marks of first student: ");
    scanf("%f",&s1.marks);
    printf("Enter roll number of second stuent: ");
    scanf("%d",&s2.rollno);
    printf("Enter marks of second stuents: ");
    scanf("%f",&s2.marks);
    printf("\n\n");
    printf("First student rollno = %d & marks = %f\n",s1.rollno,s1.marks);
    printf("Second student rollno = %d & marks = %f",s2.rollno,s2.marks);
}