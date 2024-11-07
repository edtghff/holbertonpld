#include <stdio.h>
#include "main.h"

int main(void)
{
	int arr[6] = {1, 24, 35, 12, 1, 7};
	int size = sizeof(arr) / sizeof(arr[0]);

	int* largestElement = largest(arr, size);

	printf("Largest element: %p\n", largestElement);

	return 0;
}
