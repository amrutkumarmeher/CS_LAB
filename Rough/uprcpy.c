// WAP to input a string & uppercase it & copy it to another string, then compare both the strings.
#include <stdio.h>
#include <string.h>
int main(){
    char striA[30];
    char striB[30];
    printf("Input your string\n");
    gets(striA);
    strupr(striA);
    strcpy(striB,striA);
    printf("The string A is ");
    puts(striA);
    printf("The string B is ");
    puts(striB);
    if(strcmp(striA,striB)==0){
        printf("Both the strings are same");
    } else {
        printf("Both the strings are not same");
    }
}