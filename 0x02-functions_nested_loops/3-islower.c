#include "main.h"

/**
 *  _islower - function to print lower case
 * @c: parameter to be printed
 * Return: 0 when successful
 */

int _islower(int c)
{
	if (c  >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
