#include<stdio.h>
int main(){
    int x,y,sum;
    int *p = &x;
    int *q = &y;
    printf("Input 2 number\n");
    scanf("%d%d",&x,&y);
    sum = *p + *q;
    printf("Sum = %d",sum);
}