// WAP to input a matrix 3x3 & display it.
#include <stdio.h>
int main(){
    int matrix[3][3],i,j;
    printf("Input the matrix\n");
    for (i = 0; i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The elements of the matrix are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}