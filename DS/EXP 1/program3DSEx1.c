// WAP to input a matrix of order 3*4 & display it

#include <stdio.h>
int main(){
	int a[3][4];
	int i;
	int j;
	printf("Input the matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("The matrix is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
