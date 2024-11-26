// Exxperiment 8, WAPTI PivotSort algorithm
#include <stdio.h>
void swap(int *a, int *b, int *temp)
{
    *temp = *a;
    *a = *b;
    *b = *temp;
}
int pivot(int lowIndx, int highIndx, int *temp, int a[])
{
    int pivotIndx = lowIndx;
    int i = lowIndx;
    int j = highIndx;

    while (i < j)
    {
        while ((a[i] <= a[pivotIndx]) && (i < highIndx))
        {
            i++;
        }
        while ((a[j] >= a[pivotIndx]) && (j > lowIndx))
        {
            j--;
        }
        if (i < j)
        {
            swap(&a[i], &a[j], temp);
        }
    }
    swap(&a[j], &a[pivotIndx], temp);
    return j;
}
void QuickSort(int lowIndx, int highIndx, int *temp, int array[])
{
    if ((highIndx - lowIndx) <= 1)
    {
        return;
    }
    int pivtIndx = pivot(lowIndx, highIndx, temp, array);
    QuickSort(lowIndx, pivtIndx - 1, temp, array);  // for left
    QuickSort(pivtIndx + 1, highIndx, temp, array); // for right
}
int main()
{
    int n,temp;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Input elements of array:\n");
    for(int i = 0; i<n;i++){
        scanf("%d",&a[i]);
    }
    QuickSort(0,n-1,&temp,a);
    printf("Sorted array: ");
    for(int i = 0; i<n;i++){
        printf("%d ",a[i]);
    }
}