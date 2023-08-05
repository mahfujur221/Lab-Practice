#include <stdio.h>

void swap(int *p, int *y)
{
	int temp = *p;
	*p = *y;
	*y = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_x;
	for (i = 0; i < n-1; i++)
	{

		min_x = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_x])
			min_x = j;


		if(min_x != i)
			swap(&arr[min_x], &arr[i]);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}

