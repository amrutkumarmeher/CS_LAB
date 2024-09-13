// Experiment no. 6
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int front = -1;
int rear = -1;
int capacity = 19;
void insert(int q[])
{
    int item;
    printf("Input item to be inserted: ");
    scanf("%d", &item);
    if (rear == capacity)
    {
        printf("The queue is full!\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        q[rear] = item;
    }
    else
    {
        rear++;
        q[rear] = item;
    }
}
void del(int q[])
{
    int item;
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty!\n");
    }
    else
    {
        item = q[front];
        front++;
        printf("The deleted item= %d\n", item);
    }
}
void display(int q[])
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty!\n");
    }
    else
    {
        printf("\n");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", q[i]);
        }
        printf("\n\n");
    }
}
int main()
{
    int q[capacity + 1];
    int op;
    while (1)
    {
        printf("THE QUEUE OPERATIONS\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Input your choice: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            insert(q);
            break;
        case 2:
            del(q);
            break; 
        case 3:
            display(q);
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Please give a valid choce\n");
            break;
        }
    }
}