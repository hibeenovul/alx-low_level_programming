#include "main.h"

/**
 * _isdigit - function for the parameter
 * @c: parameter for function to work with
 * Return: 0 when the code is successful
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
