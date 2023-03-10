#include "main.h"

/**
 * _puts - parameter function
 * @str: parameter to consider
 * Return: 0 when successful
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
