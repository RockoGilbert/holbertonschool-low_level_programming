#include "search_algos.h"

/**
 * @array: pointer to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of matched value in array or -1 if error or not found
 */

int linear_search(int *array, size_t size, int value)
{
int i;

if (!array)
	return (-1);

for (i = 0 ; i < (int) size ; i++)
{
	if (array[i] != value)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
}

return (-1);
}