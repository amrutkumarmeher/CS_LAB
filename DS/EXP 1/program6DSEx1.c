// WAP to input your college name & copy it to another string & display them.

#include <stdio.h>
#include <string.h>
int main(){
	char strA[30];
	char strB[30];
	printf("Enter your college name\n");
	gets(strA);
	strcpy(strB,strA);
	printf("Your college name in string A: ");
	puts(strA);
	printf("Your college name in string B: ");
	puts(strB);
}
