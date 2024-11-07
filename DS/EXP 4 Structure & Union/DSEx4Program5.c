// WAP to create a structure Student with fields roll, name, department, course, year of joining. assume there are 5 students. Print details by inputing rollno.
#include <stdio.h>
#include <string.h>
int main()
{
    struct Student
    {
        char rollno[7];
        char name[30];
        char department[10];
        char course[10];
        char yearOfJoining[5];
    };
    struct Student StuArr[5];
    int i;
    char response[7];
    char found = '0';
    for (i = 0; i < 5; i++)
    {
        printf("Enter roll number of the student %d:\n", i + 1);
        gets(StuArr[i].rollno);
        printf("Enter name of the student %d:\n", i + 1);
        gets(StuArr[i].name);
        printf("Enter department of the student %d: ", i + 1);
        gets(StuArr[i].department);
        printf("Enter course of the student %d: ", i + 1);
        gets(StuArr[i].course);
        printf("Enter year of joining of the stuent %d: ", i + 1);
        gets(StuArr[i].yearOfJoining);
        // }
        printf("\n\n");
        while (1)
        {
            printf("Enter rollno of the desired student or q for quit\n");
            gets(response);
            if (response[0] == 'q')
            {
                break;
            }
            else
            {
                for (i = 0; i < 5; i++)
                {
                    if (strcmp(StuArr[i].rollno, response) == 0)
                    {
                        printf("\nStudent details:\n");
                        printf("Name: ");
                        puts(StuArr[i].name);
                        printf("Rollno: ");
                        puts(StuArr[i].rollno);
                        printf("Dept: ");
                        puts(StuArr[i].department);
                        printf("Year of joining: ");
                        puts(StuArr[i].yearOfJoining);
                        found = '1';
                    }
                }
                if (found == '0')
                {
                    printf("\nInvalid stuent details...\n\n");
                }
            }
        }
    }
}