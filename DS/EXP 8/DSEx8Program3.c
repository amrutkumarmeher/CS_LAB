// WAPTI Linear search
#include <stdio.h>
int LinearSearch(int item,int n, int a[]){
    int i;
    for(i = 0; i<n;i++){
        if(a[i]==item){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,item,i,pos;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Insert elements of the array:\n");
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
<<<<<<< HEAD
    printf("Exter the element you wanna search: ");
    scanf("%d",&element);
    int indx = BinarySearch(element,size,a);
    if(indx==-1){
        printf("This element isn't in the array!");
    }
    else{
        printf("The position of the element in array is: %d\n",indx);
=======
    printf("Enter the item you wanna search: ");
    scanf("%d",&item);
    pos = LinearSearch(item,n,a);
    if(pos==-1){
        printf("Item not found in the array!");
    } else {
        printf("Item found at %d",pos);
>>>>>>> 08cd4e1fe56554c32766d92b8266dc8b4be01c1a
    }
}