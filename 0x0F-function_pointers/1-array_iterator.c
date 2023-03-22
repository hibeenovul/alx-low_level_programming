#include "function_pointers.h"

/**
 * array_iterator - function that iterates array
 * @array: parameter to consider
 * @size: size of the parameter
 * @action: pointer to function
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action)
		for (j = 0; j < size; j++)
			action(array[j]);
}
