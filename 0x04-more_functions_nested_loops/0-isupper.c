#include "main.h"

/**
 * _isupper - function for upper case
 * @c: parameter to check
 * Return: 0 when the code is successful
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
