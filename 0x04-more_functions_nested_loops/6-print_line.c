#include "main.h"

/**
 * print_line - function to print
 * @n: parameter to consider
 * Return: 0 when successful
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
