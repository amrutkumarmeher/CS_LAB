// WAP to input the firstname & lastname & show full name;
#include <stdio.h>
#include <string.h>
int main(){
    char firstname[10],lastname[10];
    printf("Input first name\n");
    gets(firstname);
    printf("Input last name\n");
    gets(lastname);
    printf("The first name is: ");
    puts(firstname);
    printf("The last name is: ");
    puts(lastname);
    strcat(firstname,lastname);
    printf("The full name is\n");
    puts(firstname);
}