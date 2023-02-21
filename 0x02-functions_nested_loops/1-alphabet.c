#include "main.h"

/**
 * print_alphabet - main fuction is void and it print alphabet
 *
 * Return: 0 when successful
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
