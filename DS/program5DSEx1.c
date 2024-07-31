// WAP to input your full name & display its length

#include <stdio.h>
#include <string.h>
int main(){
	char name[30];
	int length;
	printf("Enter your name\n");
	gets(name);
	length = strlen(name);
	printf("The length of your name is: %d",length);
}
