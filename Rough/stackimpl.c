#include <stdio.h>
void push(int *s,int item,int *n,int *top){
    if (*top>=*n-1){
        printf("Stack overflow!\n");
    } else {
        *top += 1;
        s[*top] = item;
    }
}
int pop(int *s,int *n,int *top){
    int item;
    if (*top<=-1){
        printf("Stack is empty");
    } else {
        item = s[*top];
        *top--;
        return item;
    }
}
int main(){
    int n = 10;
    int top = 0;
    int stack[n];
    push(stack,5,&n,&top);
    printf("%d",pop(stack,&n,&top));
}