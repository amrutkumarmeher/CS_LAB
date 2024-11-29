// WAPTI BinarySearch Algorithm.
#include <stdio.h>
int BinarySearch(int element, int size, int a[])
{
    int mid;
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        mid = (int)((left + right) / 2);
        if (a[mid] == element)
        {
            return mid;
        }
        else
        {
            if (element < a[mid])
            {
                right = mid - 1;
            }
            else if (element > a[mid])
            {
                left = mid + 1;
            }
        }
    }
    return -1;
}
void bubble_sort(int n, int a[])
{
	int temp, i, j;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
    int size,element,i;
    printf("Input size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter your array elements\n");
    for(i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Exter the element you wanna search: ");
    scanf("%d",&element);
    bubble_sort(size,a);
    int indx = BinarySearch(element,size,a);
    if(indx==-1){
        printf("Element isn't in the array!");
    }
    else{
        printf("The position of the element in sorted array is: %d\n",indx);
        printf("The sorted array:\n");
        for(i = 0; i<size;i++){
            printf("%d ",a[i]);
        }
    }
}