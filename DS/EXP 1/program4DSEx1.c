// WAP to input an array & delete an element.

#include <stdio.h>
int main(){
    int a[20],n,k,j,item,i;
    printf("Input the size of array\n");
    scanf("%d",&n);
    printf("Input the array\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Input the position no. from which you wanna delete\n");
    scanf("%d",&k);
    k=k-1;
    item = a[k];
    for (j=k;j<n;j++){
        a[j] = a[j+1];
    }
    n = n-1;
    printf("The array after deleting an element\n");
    for (i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}