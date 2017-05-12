#include<stdio.h>

#define SIZE 10

void qs(int *arr, int start, int end);
void swap(int *arr, int a, int b);

int main()
{
	int arr[SIZE] = {1, 4, 6, 2, 18, 9, -1, 0, 3, 4};

	qs(&arr[0], 0, SIZE - 1);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void qs(int *arr, int start, int end)
{
	if (end - start <= 0)
	{
		return;
	}

	int pivot = arr[end];
	int i = start - 1;
	int j = start;

	while (j < end)
	{
		if (arr[j] < pivot) {
			swap(arr, ++i, j);
		}
		j++;
	}
	swap(arr, ++i, end);

	qs(arr, start, i - 1);
	qs(arr, i + 1, end);
}

void swap(int *arr, int a, int b)
{
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}
