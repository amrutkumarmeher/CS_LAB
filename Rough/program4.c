// WAP to input the firstname & lastname & show the full name & its full length.
#include <stdio.h>
#include <string.h>
int main(){
    char firstname[10],lastname[10],midname[10];
    printf("Input first name\n");
    gets(firstname);
    printf("Input middle name\n");
    gets(midname);
    printf("Input last name\n");
    gets(lastname);
    printf("The first name is: ");
    puts(firstname);
    printf("The middle name is: ");
    puts(midname);
    printf("The last name is: ");
    puts(lastname);
    strcat(firstname,midname);
    strcat(firstname,lastname);
    printf("The full name is\n");
    puts(firstname);
    printf("Its length is: %d\n",strlen(firstname));
    printf("Its size is: %d",sizeof(firstname));
}