// WAP to input age, name & gender of 3 persons. Display the name of youngest person.
#include <stdio.h>
#include <string.h>
int main(){
    struct person{
        int age;
        char name[30];
        char gender;
    };
    struct person person1, person2, person3;
    printf("Enter first person name: ");
    gets(person1.name);
    printf("Enter second person name: ");
    gets(person2.name);
    printf("Enter third person name: ");
    gets(person3.name);
    printf("Enter first person age: ");
    scanf("%d", &person2.age);
    printf("Enter second person age: ");
    scanf("%d", &person2.age);
    printf("Enter third person age: ");
    scanf("%d", &person3.age);
    printf("Enter first persons gender: ");
    scanf(" %c", &person1.gender);
    printf("Enter second persons gender: ");
    scanf(" %c", &person2.gender);
    printf("Enter third persons gender: ");
    scanf(" %c", &person3.gender);
    if (person1.age < person2.age){
        if (person1.age < person3.age){
            printf("The youngest person is ");
            puts(person1.name);
        }else{
            printf("The youngest person is ");
            puts(person3.name);
        }
    }else{
        if (person2.age < person3.age){
            printf("The youngest person is ");
            puts(person2.name);
        }else{
            printf("The youngest person is: ");
            puts(person3.name);
        }
    }
}