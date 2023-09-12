#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers,
 * using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located
**/

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (!array)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
