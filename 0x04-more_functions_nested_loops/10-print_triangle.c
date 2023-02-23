#include "main.h"

/**
 * print_triangle - function to print a triangle
 * @size: parameter to consider
 * Return: 0 when successful
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - j); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
