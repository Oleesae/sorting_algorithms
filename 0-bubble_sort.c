#include "sort.h"

/**
 * bubble_sort - sorts an array using the bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int temp, unsortedRange;
	int *swapped;
	int i, len, j;

	if (size < 2)
		return;

	unsortedRange = size;
	len = size;
	do {
		swapped = NULL;
		for (i = 0; i <= unsortedRange - 2; ++i)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = &i;
			}
			for (j = 0; j <= len - 1; ++j)
			{
				printf("%d", array[j]);
				if (j != len - 1)
					printf(", ");
				else
					printf("\n");
			}
		}
		--unsortedRange;
	} while (swapped != NULL);
}
