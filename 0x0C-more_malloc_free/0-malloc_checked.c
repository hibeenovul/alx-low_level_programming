#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: unsigned integer
 * Return: pointer allocated to memory
 */

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
