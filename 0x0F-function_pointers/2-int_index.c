#include "function_pointers.h"

/**
 * int_index - integer index function
 * @array: function of array numbers
 * @size: size of the integer
 * @cmp: parameter function
 * Return: return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);

	}
	return (-1);
}
