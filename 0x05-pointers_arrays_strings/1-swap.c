#include "main.h"

/**
 * swap_int - parameter function
 * @a: parameter 1
 * @b: parameter 2
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
