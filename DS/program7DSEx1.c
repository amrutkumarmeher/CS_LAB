// WAP to check the input string is a palindrome or not.

#include <stdio.h>
#include <string.h>

int main(){
	char orgi[30],rev[30];
	printf("Input your string\n");
	gets(orgi);
	strcpy(rev,orgi);
	strrev(rev);
	if (strcmp(orgi,rev)==0){
		printf("The string is palidrome!");
	} else {
		printf("The string is not palidrome!");
	}
}
