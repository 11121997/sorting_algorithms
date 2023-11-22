#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: array we want to sort it
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t n, h, k;
	int current;

	if (!array || !size)
		return;
	for (n = 0; n < size - 1; n++)
	{
		for (h = size - 1, k = n + 1; h > n; h--)
		{
			if (array[h] < array[k])
			{
				k = h;
			}
		}
		if (array[n] > array[k])
		{
			current = array[n];
			array[n] = array[k];
			array[k] = current;
			print_array(array, size);
		}
	}
}

