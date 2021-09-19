#include "sort.h"

/**
 * bubble_sort - Sort array with bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 * Return: Just sort and print
 */

void bubble_sort(int *array, size_t size)
{
	int roc;
	size_t j, k;

	if (array == NULL || size == 0)
		return;

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				roc = array[k];
				array[k] = array[k + 1];
				array[k + 1] = roc;
				print_array(array, size);



			}

		}


	}


}
