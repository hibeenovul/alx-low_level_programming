#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array function
 * @size: size of array
 * @c: size of c
 * Return: return the size of array
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
		return (NULL);
	i = malloc(sizeof(c) * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		i[j] = c;
	return (i);
}
