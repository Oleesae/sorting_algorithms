#include "sort.h"

/**
 * selection_sort - Implements the selection sort algorithms
 * @array: array of integers
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp, n;

	n = size;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		temp = array[min];
		array[min] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
