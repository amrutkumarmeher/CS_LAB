// WAP to input string if its palindrom or not.
#include <stdio.h>
#include <string.h>
int main(){
    char a[15],b[15];
    printf("Input the string\n");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b) == 0){
        printf("Palindrom!");
    } else {
        printf("Not Palindrom!");
    }
    
}