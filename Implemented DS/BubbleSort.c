// WAP to implement bubble sort
#include <stdio.h>
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
	int n, i;
	printf("Size of array: ");
	scanf("%d", &n);
	int a[n];
	printf("Input your array\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	bubble_sort(n, a);
	printf("Sorted array:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
