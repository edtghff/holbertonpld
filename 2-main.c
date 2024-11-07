#include <stdio.h>
#include "main.h"

int main()
{
	int arr[] = {1, 23, 50, 71, 80};
	int size = sizeof(arr) / sizeof(arr[0]);

	double avg = average(arr, size); 

	printf("The average is: %.2f\n", avg);

	return 0;
}
