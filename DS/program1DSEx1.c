// Q1. WAP to input an array of 10 integers & display them.

#include <stdio.h>
int main(){
	int a[10],i;
	printf("Input 10 integers\n");
	for (i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	printf("The array is:\n");
	for (i=0; i<10; i++){
		printf("%d\n",a[i]);
	}
}
