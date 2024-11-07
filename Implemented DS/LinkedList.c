#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void insertStart(struct Node **start,int data){
    struct Node *newNode = (struct Node *) malloc(sizeof (struct Node));
    newNode->data = data;
    newNode->next = *start;
    *start=newNode;
}
void insertend(struct Node **start, int data){
    struct Node *ptr;
    struct Node *newNode = (struct Node *) malloc(sizeof (struct Node));
    newNode->data=data;
    newNode->next=NULL;
    if(*start==NULL){
        *start=newNode;
    }else{
        ptr=*start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=newNode;
    }
}
void display(struct Node *node){
    if(node==NULL){
        printf("empty Linked list\n");
    } else {
        printf("The Linked list:\t");
        while(node!=NULL){
            printf("%d  ",node->data);
            node = node->next;
        }
        printf("\n");
    }
}
int main(){
    struct Node *start = NULL;
    int item,choice;
    while(1){
        printf("1. Insert at begainning\n");
        printf("2. Insert at end\n");
        printf("3. Display\n");
        printf("Input choice:\t");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Input item value to be inserted: ");
            scanf("%d",&item);
            insertStart(&start,item);
            break;
        case 2:
            printf("Input item value to be inserted: ");
            scanf("%d",&item);
            insertend(&start,item);
            break;
        case 3:
            display(start);
            break;
        default:
            break;
        }
    }
}

