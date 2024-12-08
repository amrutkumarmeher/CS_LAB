// WAPTI binary tree traveral
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

struct node *getNode(int val)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->key = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int parseInt(char integer[])
{
    int i, len, sum = 0, pwr = 1;
    len = strlen(integer);
    for (i = len - 1; i > -1; i--)
    {

        sum += (((int)integer[i]) - 48) * pwr;
        pwr *= 10;
    }
    return sum;
}

struct node *insertNode(struct node *root, int val)
{
    if (root == NULL)
    {
        return getNode(val);
    }
    if (root->key < val)
    {
        root->right = insertNode(root->right, val);
    }
    if (root->key > val)
    {
        root->left = insertNode(root->left, val);
    }
};

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}

int main()
{
    struct node *root = NULL;

    int data;
    char ch, inputBuff[10];
    do
    {
        printf("Select one of the operations:\n");
        printf(" 1. Insert a new node in the binary tree\n");
        printf(" 2. To display the nodes of the Binary Tree(via inorder traversal)\n");

        int choice;
        gets(inputBuff);
        choice = parseInt(inputBuff);

        switch (choice)
        {
        case 1:
            printf("Enter the value to be inserted\n");
            gets(inputBuff);
            data = parseInt(inputBuff);
            root = insertNode(root, data);
            break;
        case 2:
            printf("Inorder Traversal of the binary tree:\n");
            inorder(root);
            printf("\n");
            break;
        default:
            printf("Wrong Entry\n");
            break;
        }
        printf("Do you want to continue (type Y or N)\n");
        gets(inputBuff);
        ch = inputBuff[0];
    } while (ch == 'y' || ch == 'Y');
}