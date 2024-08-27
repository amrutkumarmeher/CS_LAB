#include <stdio.h>
int main(){
    int x = 50;
    int *p = &x;
    x++;
    printf("%d\n",x);
    x = *p + 10;
    printf("%d\n",x);
    (*p)--;
    printf("x=%d",*p);
}