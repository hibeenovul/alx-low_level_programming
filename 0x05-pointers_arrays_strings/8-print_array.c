#include "main.h"
#include <stdio.h>

/**
 * print_array - function parameter
 * @a: parameter to consider
 * @n: parameter to consider
 * Return: 0 when sucessful
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
