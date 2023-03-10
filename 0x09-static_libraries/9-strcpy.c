#include "main.h"

/**
 * _strcpy - function parameter
 * @dest: parameter 1
 * @src: parameter 2
 * Return: 0 when sucessful
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
