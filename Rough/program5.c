// WAP two matrix of size 3x3 & add them & show the result
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3];
    int c[3][3], i, j;
    printf("Input first matrix\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }}
    printf("Input second matrix\n");
    for (i=0; i<3;i++){
        for (j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }}
    for (i=0;i< 3;i++){
        for (j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }}
    printf("The first matrix is this\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is this\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("The result is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}