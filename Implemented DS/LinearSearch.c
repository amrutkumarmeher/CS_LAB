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
    printf("Enter the item you wanna search: ");
    scanf("%d",&item);
    pos = LinearSearch(item,n,a);
    if(pos==-1){
        printf("Item not found in the array!");
    } else {
        printf("Item found at %d",pos);
    }
}