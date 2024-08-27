// WAP to input an array 10 integer & insert 50 at position 3 & display the array.

#include <stdio.h>
int main(){
	int item=50,pos=3,i;
	int arr[10];
	printf("Input 10 integers\n");
	for(i=1;i<=10;i++){
		scanf("%d",&arr[i]);
	}
	for (i=10;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos] = item;
	printf("The elements of the array:\n");
	for(i=1;i<=11;i++){
		printf("%d\n",arr[i]);
	}
}
