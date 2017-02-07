#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge_sort(int *, int);
void merge(int *, int *, int *, int);
void cpy_arr(int *, int *, int);

int main() {
	int n;
	scanf("%i", &n);

	int *arr = (int *) malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%i", &arr[i]);
	}

	merge_sort(arr, n);

	for (int i = 0; i < n; i++) {
		printf("%i ", arr[i]);
	}
	printf("\n");

	free(arr);
}

void merge_sort(int *arr, int size) {
	if (size < 2) {
		return;
	}

	int mid = size / 2;
	int *first = (int *) malloc(mid * sizeof(int));
	int *second = (int *) malloc((size - mid) * sizeof(int));

	cpy_arr(first, arr, mid);
	cpy_arr(second, &arr[mid], size - mid);

	merge_sort(first, mid);
	merge_sort(second, size - mid);

	merge(arr, first, second, size);

	free(first);
	free(second);
}

void merge(int *arr, int *first, int *second, int size) {
	int mid = size / 2;
	int i = 0, j = 0;
	
	while (i + j < size) {
		if (j == (size - mid) || (i < mid && first[i] < second[j]))  {
			arr[i + j] = first[i++];
		} else {
			arr[i + j] = second[j++];
		}
	}
}

void cpy_arr(int *dest, int *source, int n) {
	for (int i = 0; i < n; i++) {
		dest[i] = source[i];
	}
}
