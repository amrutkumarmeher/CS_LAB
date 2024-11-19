#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void insert(struct Node** head, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next=(*head);
    (*head) = new_node;
};
void deleteNode(struct Node** head_ref, int key){
    struct Node *temp = *head_ref,*prev;
    if(temp!=NULL && temp->data == key){
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while(temp != NULL && temp -> data != key){
        prev = temp;
        temp = temp->next;
    }
    if(temp==NULL){
        return;
    }
    prev-> next=temp->next;
    free(temp);
};
void display(struct Node* node){
    while (node!=NULL){
        printf(" %d ",node->data);
        node=node->next;
    }
    printf("\n");
};
int main(){
    struct Node* start = NULL;
    int item,choice;
    while(1){
        printf("1. Insert at begainning\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
              printf("Input item value to be inserted: ");
              scanf("%d",&item);
              insert(&start,item);
              break;
            case 2:
              printf("Input item value to be deleted: ");
              scanf("%d",item);
              deleteNode(&start,item);
              break;
            case 3:
              display(start);
              break;
            default:
              exit(0);
        }
    }
}