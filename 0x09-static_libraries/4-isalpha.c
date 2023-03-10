#include "main.h"

/**
 * _isalpha - function
 * @c: parameter check
 * Return: 0 when succesful
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
