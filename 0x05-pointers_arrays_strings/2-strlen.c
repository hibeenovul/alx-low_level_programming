#include "main.h"

/**
 * _strlen - parameter function
 * @s: parameter
 * Return: no return
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\10')
		count++;
	return (count);
}
