#include "main.h"

/**
 * _abs - check for absolute value
 * @a: parameters to be checked
 * Return: 0 when successful
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
