#include "search_algos.h"

/**
 * binary_search - To searches for a value in a sorted array of integers,
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
**/

int binary_search(int *array, size_t size, int value)
{
	size_t j, left, right;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);

		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);

		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}
