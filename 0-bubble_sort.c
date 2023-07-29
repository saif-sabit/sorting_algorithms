#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers
 * @array: The array to be sorted
 * @size: Number of elements
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	bool swapped;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{

				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}
/**
 * swap - swaps two numbers
 * @val1 : First no
 * @val2 : Second no
 */
void swap(int *val1, int *val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}
