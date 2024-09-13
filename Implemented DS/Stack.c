// Experiment no. 2 & 5
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int top = -1;
void push(int s[]){
    int item;
    printf("Input item\n");
    scanf("%d",&item);
    if (top==19){
        printf("full\n");
    } else{
        top = top +1;
        s[top] = item;
    }
}
void pop(int s[]){
    int item;
    if(top==-1){
        printf("stack is empty\n");
    }
    else {
        item = s[top];
        top = top-1;
        printf("the deleted element=%d\n",item);
    }
}
void display(int s[]){
    int i;
    for ( i = top; i >=0; i--){
        printf("%d\n",s[i]);
    }
}
int main(){
    int s[20], op=4;
    while (1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("choose your option\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            push(s);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            display(s);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Give a valid option(1-4)\n");
            break;
        }
    }
    
}