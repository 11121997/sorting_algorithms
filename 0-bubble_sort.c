#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array we want to sort it in ascending order
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int current;
	size_t w, n;

	if (!array || !size) /*check array & size are existing*/
	{
		return;
	}

	w = 0;
	while (w < size) /* loop over the size */
	{
		for (n = 0; n < size - 1; n++) /* loop over the elements */
		{
			if (array[n] > array[n + 1]) /*comparison*/
			{
				current = array[n];
				array[n] = array[n + 1];
				array[n + 1] = current;
				print_array(array, size);
			}
		}
		w++;
	}
}

