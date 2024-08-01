// WAP to insert a new element to an array.
#include <stdio.h>
int main(){
    int i,item,pos,n=8;
    int arr[n];

    printf("Input the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Input the new element\n");
    scanf("%d",&item);
    printf("tell the position\n");
    scanf("%d",&pos);
    pos--;
    for(i=n;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=item;
    n = n+1;
    printf("The array:\n");
    for(i = 0; i<n; i++){
        printf("%d\n",arr[i]);
    }
}